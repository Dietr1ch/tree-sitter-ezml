module.exports = grammar ({
	name: "ezML",

	rules: {
		// TODO: Add the grammar rules
		document: $ => repeat($._node),

		_node: $ => choice(
			$.doctype,
			$._comment,
			// $.text,
			$.element,
			$._action,
			// $.erroneous_end_tag,
		),

		doctype: _ => token(seq('<!', /.*/, '>')),

		element: $ => choice(
			$.element_name,
		),

		_action: $ => choice(
			$.inline_action,
			$.exec_action,
		),
		inline_action: _ => token(seq('<', /.*/)),
		exec_action:   _ => token(seq('|', /.*/)),

		element_name: _ => /([A-Za-z0-9_-]{1,30})/,

		// Comments
		_comment: $ => choice(
			$.loud_comment,
			$.silent_comment,
		),
		loud_comment:     _ => token(seq('/', /.*/)),
		silent_comment:   _ => token(seq('#', /.*/))
	}
});
