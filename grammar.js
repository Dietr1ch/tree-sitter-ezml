module.exports = grammar ({
	name: "ezML",

	rules: {
		// TODO: Add the grammar rules
		source_file: $ => 'hello',


		identifier: _ => /[_\p{XID_Start}][_\p{XID_Continue}]*/,

		// Comments
		verbatim_comment: _ => token(seq('<!', /.*/, '>')),
		loud_comment:     _ => token(seq('/', /.*/)),
		silent_comment:   _ => token(seq('#', /.*/))
	}
});
