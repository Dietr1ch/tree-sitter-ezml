module.exports = grammar ({
	name: "ezML",

	rules: {
		// TODO: Add the grammar rules
		document: $ => repeat($._node),

		_node: $ => choice(
			$.doctype,
			$.entity,
			$._comment,
			// $.text,
			// $.element,
			// $.script_element,
			// $.style_element,
			// $.erroneous_end_tag,
		),

		doctype: _ => token(seq('<!', /.*/, '>')),

		entity: _ => /([A-Za-z]{1,30})/,


		// Comments
		_comment: $ => choice(
			$.loud_comment,
			$.silent_comment,
		),
		loud_comment:     _ => token(seq('/', /.*/)),
		silent_comment:   _ => token(seq('#', /.*/))
	}
});
