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
			field('tags',       repeat($.tag)),
			field('attributes', repeat($.attribute)),
			field('content',    optional($.content)),
		),
		content: $ => seq(
			'{',
			repeat(choice(
				$.element,
				$._comment,
			)),
			'}',
		),

		_identifier: _ => /[a-zA-Z0-9\p{L}_-]+/,

		element_name:    $ => $._identifier,
		element_id_name: $ => field('id', $._identifier),

		_action: $ => choice(
			$.inline_action,
			$.exec_action,
		),
		inline_action: _ => token(seq('<', /.*/)),
		exec_action:   _ => token(seq('|', /.*/)),

		tag: $ => seq('.', $.tag_name),
		tag_name: $ => $._identifier,

		attribute: $ => seq(',', $.attribute_name, optional(seq('=', $.attribute_value))),
		attribute_name: $ => $._identifier,
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
