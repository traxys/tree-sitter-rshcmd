module.exports = grammar({
  name: 'rshcmd',

  rules: {
    source_file: $ => choice(
		$.cmd_var_stmt,
		$.cmd_ctx
	),

	_strong_expr: $ => choice(
		$.istr,
		$._value,
		$.identifier
	),

	_expr: $ => choice(
		$.istr,
		$._value,
		$._word,
	),

	_value: $ => choice(
		$.str,
		$.int,
		seq(
			'[', 
			repeat(seq($._strong_expr, ',')), 
			optional($._strong_expr),
			']'
		),
	),

	var_def: $ => seq(
		$.identifier,
		'=',
		$._strong_expr,
	),

	cmd_var_stmt: $ => seq(
		'let', 
		repeat(seq($.var_def, ',')), 
		$.var_def,
	),

	cmd_vars: $ => seq(
		'let', 
		repeat(seq($.var_def, ',')), 
		optional($.var_def),
		'in',
	),

	cmd_ctx: $ => seq(optional($.cmd_vars), $._cmd_list),

	_cmd_list: $ => seq(repeat(seq($.cmd_chain, ';')), $.cmd_chain),

	cmd_op: $ => choice(
		'||',
		'&&',
	),

	cmd_chain: $ => choice(
		seq($._cmd_chain_part, $.cmd_op, $.cmd_chain),
		$.pipeline,
	),

	_cmd_chain_part: $ => choice(
		$.pipeline,
		seq('(', $.cmd_chain, ')'),
	),

	pipeline: $ => seq(repeat(seq($.cmd, '|')), $.cmd),

	cmd: $ => seq($.cmd_name, repeat($._expr), repeat($.redir)),

	cmd_name: $ => $._expr,

	redir_kind: $ => choice(">", "<", ">>"),

	redir: $ => seq($.redir_kind, $._expr),

	istr: $ => /"(\\[^\n]|[^"\n])*"/,
	int: $ => /[0-9_]+/,
	str: $ => /'(\\[^\n]|[^'\n])*'/,
	identifier: $ => /[a-zA-Z0-9_]+/,
	_word: $ => choice($.identifier, $.word),
	word: $ => /[\w\d:+\-_/.$]+/,
  }	
});
