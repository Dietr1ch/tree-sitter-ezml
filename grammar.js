module.exports = grammar ({
	name: "ezML",

	rules: {
		document: $ => repeat($._node),
		_node: $ => choice(
			$.doctype,
			$.element,
			$._comment,
			$._action,
		),

		doctype: _ => token(seq('<!', /.*/, '>')),

		element: $ => seq(
			$.element_name,
			optional(seq('#', $.element_id_name)),
			repeat($.tag),
			repeat($.attribute),
			optional($.content),
		),
		content: $ => seq(
			'{',
			repeat(choice(
				$.element,
				$._comment,
			)),
			'}',
		),

		element_name:    _ => /([A-Za-z_][A-Za-z0-9_-]{0,30})/,
		element_id_name: _ => /([A-Za-z_][A-Za-z0-9_-]{0,30})/,

		_action: $ => choice(
			$.inline_action,
			$.exec_action,
		),
		inline_action: _ => token(seq('<', /.*/)),
		exec_action:   _ => token(seq('|', /.*/)),

		tag: $ => seq('.', $.tag_name),
		tag_name: _ => /([A-Za-z0-9_-]{1,30})/,

		attribute: $ => seq(',', $.attribute_name, optional(seq('=', $.attribute_value))),
		attribute_name: _ => /([A-Za-z_][A-Za-z0-9_-]*)/,
		attribute_value: _ => choice(
			seq('"', token(/[^"]*/), '"'),
			seq("'", token(/[^']*/), "'"),
		),

		// Comments
		_comment: $ => choice(
			$.loud_comment,
			$.silent_comment,
		),
		loud_comment:   _ => token(seq('!', token(/.*/),)),
		silent_comment: _ => token(seq('/', token(/.*/),)),
	}
});
