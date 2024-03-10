module.exports = grammar ({
	name: "ezML",

	rules: {
		// TODO: Add the grammar rules
		document: $ => repeat($._node),

		_node: $ => choice(
			$.doctype,
			$.element,
			$._comment,
			// $.text,
			$._action,
			// $.erroneous_end_tag,
		),

		doctype: _ => token(seq('<!', /.*/, '>')),

		element: $ => seq(
			$.element_name,
			optional(seq('#', $.element_id_name)),
			repeat($.tag),
			repeat($.attribute),
			//repeat($._node),
		),
		element_name:     _ => /([A-Za-z_][A-Za-z0-9_-]{0,30})/,
		element_id_name:  _ => /([A-Za-z_][A-Za-z0-9_-]{0,30})/,

		_action: $ => choice(
			$.inline_action,
			$.exec_action,
		),
		inline_action: _ => token(seq('<', /.*/)),
		exec_action:   _ => token(seq('|', /.*/)),

		tag: $ => seq('.', $.tag_name),
		tag_name: _ => /([A-Za-z0-9_-]{1,30})/,

		attribute: $ => seq(',', $.attribute_name, '=', $.attribute_value),
		attribute_name: _ => /([A-Za-z_][A-Za-z0-9_-]*)/,
		attribute_value: _ => choice(
			seq('"', token(/[^"]+/), '"'),
			seq("'", token(/[^']+/), "'"),
		),

		// Comments
		_comment: $ => choice(
			$.loud_comment,
			$.silent_comment,
		),
		loud_comment:   _ => token(seq('!', token(/.*/), /\n/)),
		silent_comment: _ => token(seq('/', token(/.*/), /\n/))
	}
});
