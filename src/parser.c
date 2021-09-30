#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 69
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LBRACK = 1,
  anon_sym_COMMA = 2,
  anon_sym_RBRACK = 3,
  anon_sym_EQ = 4,
  anon_sym_let = 5,
  anon_sym_in = 6,
  anon_sym_SEMI = 7,
  anon_sym_PIPE_PIPE = 8,
  anon_sym_AMP_AMP = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_PIPE = 12,
  anon_sym_GT = 13,
  anon_sym_LT = 14,
  anon_sym_GT_GT = 15,
  sym_istr = 16,
  sym_int = 17,
  sym_str = 18,
  sym_identifier = 19,
  sym_word = 20,
  sym_source_file = 21,
  sym__strong_expr = 22,
  sym__expr = 23,
  sym__value = 24,
  sym_var_def = 25,
  sym_cmd_var_stmt = 26,
  sym_cmd_vars = 27,
  sym_cmd_ctx = 28,
  sym__cmd_list = 29,
  sym_cmd_op = 30,
  sym_cmd_chain = 31,
  sym__cmd_chain_part = 32,
  sym_pipeline = 33,
  sym_cmd = 34,
  sym_cmd_name = 35,
  sym_redir_kind = 36,
  sym_redir = 37,
  sym__word = 38,
  aux_sym__value_repeat1 = 39,
  aux_sym_cmd_var_stmt_repeat1 = 40,
  aux_sym__cmd_list_repeat1 = 41,
  aux_sym_pipeline_repeat1 = 42,
  aux_sym_cmd_repeat1 = 43,
  aux_sym_cmd_repeat2 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [anon_sym_let] = "let",
  [anon_sym_in] = "in",
  [anon_sym_SEMI] = ";",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PIPE] = "|",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_GT_GT] = ">>",
  [sym_istr] = "istr",
  [sym_int] = "int",
  [sym_str] = "str",
  [sym_identifier] = "identifier",
  [sym_word] = "word",
  [sym_source_file] = "source_file",
  [sym__strong_expr] = "_strong_expr",
  [sym__expr] = "_expr",
  [sym__value] = "_value",
  [sym_var_def] = "var_def",
  [sym_cmd_var_stmt] = "cmd_var_stmt",
  [sym_cmd_vars] = "cmd_vars",
  [sym_cmd_ctx] = "cmd_ctx",
  [sym__cmd_list] = "_cmd_list",
  [sym_cmd_op] = "cmd_op",
  [sym_cmd_chain] = "cmd_chain",
  [sym__cmd_chain_part] = "_cmd_chain_part",
  [sym_pipeline] = "pipeline",
  [sym_cmd] = "cmd",
  [sym_cmd_name] = "cmd_name",
  [sym_redir_kind] = "redir_kind",
  [sym_redir] = "redir",
  [sym__word] = "_word",
  [aux_sym__value_repeat1] = "_value_repeat1",
  [aux_sym_cmd_var_stmt_repeat1] = "cmd_var_stmt_repeat1",
  [aux_sym__cmd_list_repeat1] = "_cmd_list_repeat1",
  [aux_sym_pipeline_repeat1] = "pipeline_repeat1",
  [aux_sym_cmd_repeat1] = "cmd_repeat1",
  [aux_sym_cmd_repeat2] = "cmd_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [sym_istr] = sym_istr,
  [sym_int] = sym_int,
  [sym_str] = sym_str,
  [sym_identifier] = sym_identifier,
  [sym_word] = sym_word,
  [sym_source_file] = sym_source_file,
  [sym__strong_expr] = sym__strong_expr,
  [sym__expr] = sym__expr,
  [sym__value] = sym__value,
  [sym_var_def] = sym_var_def,
  [sym_cmd_var_stmt] = sym_cmd_var_stmt,
  [sym_cmd_vars] = sym_cmd_vars,
  [sym_cmd_ctx] = sym_cmd_ctx,
  [sym__cmd_list] = sym__cmd_list,
  [sym_cmd_op] = sym_cmd_op,
  [sym_cmd_chain] = sym_cmd_chain,
  [sym__cmd_chain_part] = sym__cmd_chain_part,
  [sym_pipeline] = sym_pipeline,
  [sym_cmd] = sym_cmd,
  [sym_cmd_name] = sym_cmd_name,
  [sym_redir_kind] = sym_redir_kind,
  [sym_redir] = sym_redir,
  [sym__word] = sym__word,
  [aux_sym__value_repeat1] = aux_sym__value_repeat1,
  [aux_sym_cmd_var_stmt_repeat1] = aux_sym_cmd_var_stmt_repeat1,
  [aux_sym__cmd_list_repeat1] = aux_sym__cmd_list_repeat1,
  [aux_sym_pipeline_repeat1] = aux_sym_pipeline_repeat1,
  [aux_sym_cmd_repeat1] = aux_sym_cmd_repeat1,
  [aux_sym_cmd_repeat2] = aux_sym_cmd_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_istr] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_str] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__strong_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_var_def] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd_var_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd_vars] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd_ctx] = {
    .visible = true,
    .named = true,
  },
  [sym__cmd_list] = {
    .visible = false,
    .named = true,
  },
  [sym_cmd_op] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd_chain] = {
    .visible = true,
    .named = true,
  },
  [sym__cmd_chain_part] = {
    .visible = false,
    .named = true,
  },
  [sym_pipeline] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd_name] = {
    .visible = true,
    .named = true,
  },
  [sym_redir_kind] = {
    .visible = true,
    .named = true,
  },
  [sym_redir] = {
    .visible = true,
    .named = true,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cmd_var_stmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__cmd_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pipeline_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cmd_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cmd_repeat2] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(27);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == ']') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == '|') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '$' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == ']') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 10:
      if (eof) ADVANCE(12);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '>') ADVANCE(27);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == ']') ADVANCE(15);
      if (lookahead == '|') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '$' ||
          ('+' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '$' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(22);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_istr);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_istr);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '$' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_str);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_str);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == '$' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '$' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '$' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [sym_istr] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [sym_str] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(58),
    [sym__expr] = STATE(13),
    [sym__value] = STATE(13),
    [sym_cmd_var_stmt] = STATE(63),
    [sym_cmd_vars] = STATE(5),
    [sym_cmd_ctx] = STATE(63),
    [sym__cmd_list] = STATE(65),
    [sym_cmd_chain] = STATE(53),
    [sym__cmd_chain_part] = STATE(44),
    [sym_pipeline] = STATE(38),
    [sym_cmd] = STATE(33),
    [sym_cmd_name] = STATE(2),
    [sym__word] = STATE(13),
    [aux_sym__cmd_list_repeat1] = STATE(9),
    [aux_sym_pipeline_repeat1] = STATE(15),
    [anon_sym_LBRACK] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_istr] = ACTIONS(9),
    [sym_int] = ACTIONS(11),
    [sym_str] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_word] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_PIPE,
    ACTIONS(17), 1,
      anon_sym_GT,
    STATE(25), 1,
      sym_redir_kind,
    ACTIONS(19), 2,
      anon_sym_LT,
      anon_sym_GT_GT,
    ACTIONS(21), 2,
      sym_istr,
      sym_str,
    STATE(14), 2,
      sym_redir,
      aux_sym_cmd_repeat2,
    ACTIONS(23), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(3), 4,
      sym__expr,
      sym__value,
      sym__word,
      aux_sym_cmd_repeat1,
    ACTIONS(13), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [43] = 10,
    ACTIONS(3), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_GT,
    ACTIONS(27), 1,
      anon_sym_PIPE,
    STATE(25), 1,
      sym_redir_kind,
    ACTIONS(19), 2,
      anon_sym_LT,
      anon_sym_GT_GT,
    ACTIONS(29), 2,
      sym_istr,
      sym_str,
    STATE(17), 2,
      sym_redir,
      aux_sym_cmd_repeat2,
    ACTIONS(31), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(4), 4,
      sym__expr,
      sym__value,
      sym__word,
      aux_sym_cmd_repeat1,
    ACTIONS(25), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [86] = 6,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(38), 2,
      anon_sym_PIPE,
      anon_sym_GT,
    ACTIONS(40), 2,
      sym_istr,
      sym_str,
    ACTIONS(43), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(4), 4,
      sym__expr,
      sym__value,
      sym__word,
      aux_sym_cmd_repeat1,
    ACTIONS(33), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT_GT,
  [118] = 13,
    ACTIONS(3), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_cmd_name,
    STATE(9), 1,
      aux_sym__cmd_list_repeat1,
    STATE(15), 1,
      aux_sym_pipeline_repeat1,
    STATE(33), 1,
      sym_cmd,
    STATE(38), 1,
      sym_pipeline,
    STATE(44), 1,
      sym__cmd_chain_part,
    STATE(53), 1,
      sym_cmd_chain,
    STATE(67), 1,
      sym__cmd_list,
    ACTIONS(9), 2,
      sym_istr,
      sym_str,
    ACTIONS(11), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(13), 3,
      sym__expr,
      sym__value,
      sym__word,
  [163] = 2,
    ACTIONS(48), 5,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(46), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT_GT,
      sym_istr,
      sym_str,
  [185] = 2,
    ACTIONS(52), 5,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(50), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT_GT,
      sym_istr,
      sym_str,
  [207] = 12,
    ACTIONS(54), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_cmd_name,
    STATE(8), 1,
      aux_sym__cmd_list_repeat1,
    STATE(15), 1,
      aux_sym_pipeline_repeat1,
    STATE(33), 1,
      sym_cmd,
    STATE(38), 1,
      sym_pipeline,
    STATE(44), 1,
      sym__cmd_chain_part,
    STATE(61), 1,
      sym_cmd_chain,
    ACTIONS(60), 2,
      sym_istr,
      sym_str,
    ACTIONS(63), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(13), 3,
      sym__expr,
      sym__value,
      sym__word,
  [249] = 12,
    ACTIONS(3), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_cmd_name,
    STATE(8), 1,
      aux_sym__cmd_list_repeat1,
    STATE(15), 1,
      aux_sym_pipeline_repeat1,
    STATE(33), 1,
      sym_cmd,
    STATE(38), 1,
      sym_pipeline,
    STATE(44), 1,
      sym__cmd_chain_part,
    STATE(50), 1,
      sym_cmd_chain,
    ACTIONS(9), 2,
      sym_istr,
      sym_str,
    ACTIONS(11), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(13), 3,
      sym__expr,
      sym__value,
      sym__word,
  [291] = 2,
    ACTIONS(68), 5,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(66), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT_GT,
      sym_istr,
      sym_str,
  [313] = 11,
    ACTIONS(3), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_cmd_name,
    STATE(15), 1,
      aux_sym_pipeline_repeat1,
    STATE(33), 1,
      sym_cmd,
    STATE(38), 1,
      sym_pipeline,
    STATE(44), 1,
      sym__cmd_chain_part,
    STATE(60), 1,
      sym_cmd_chain,
    ACTIONS(9), 2,
      sym_istr,
      sym_str,
    ACTIONS(11), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(13), 3,
      sym__expr,
      sym__value,
      sym__word,
  [352] = 11,
    ACTIONS(3), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_cmd_name,
    STATE(15), 1,
      aux_sym_pipeline_repeat1,
    STATE(33), 1,
      sym_cmd,
    STATE(38), 1,
      sym_pipeline,
    STATE(44), 1,
      sym__cmd_chain_part,
    STATE(48), 1,
      sym_cmd_chain,
    ACTIONS(9), 2,
      sym_istr,
      sym_str,
    ACTIONS(11), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(13), 3,
      sym__expr,
      sym__value,
      sym__word,
  [391] = 2,
    ACTIONS(72), 5,
      anon_sym_PIPE,
      anon_sym_GT,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(70), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT_GT,
      sym_istr,
      sym_str,
  [411] = 6,
    ACTIONS(17), 1,
      anon_sym_GT,
    ACTIONS(27), 1,
      anon_sym_PIPE,
    STATE(25), 1,
      sym_redir_kind,
    ACTIONS(19), 2,
      anon_sym_LT,
      anon_sym_GT_GT,
    STATE(16), 2,
      sym_redir,
      aux_sym_cmd_repeat2,
    ACTIONS(25), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [436] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACK,
    STATE(2), 1,
      sym_cmd_name,
    STATE(18), 1,
      aux_sym_pipeline_repeat1,
    STATE(36), 1,
      sym_cmd,
    ACTIONS(9), 2,
      sym_istr,
      sym_str,
    ACTIONS(11), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(13), 3,
      sym__expr,
      sym__value,
      sym__word,
  [463] = 6,
    ACTIONS(76), 1,
      anon_sym_PIPE,
    ACTIONS(78), 1,
      anon_sym_GT,
    STATE(25), 1,
      sym_redir_kind,
    ACTIONS(81), 2,
      anon_sym_LT,
      anon_sym_GT_GT,
    STATE(16), 2,
      sym_redir,
      aux_sym_cmd_repeat2,
    ACTIONS(74), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [488] = 6,
    ACTIONS(17), 1,
      anon_sym_GT,
    ACTIONS(86), 1,
      anon_sym_PIPE,
    STATE(25), 1,
      sym_redir_kind,
    ACTIONS(19), 2,
      anon_sym_LT,
      anon_sym_GT_GT,
    STATE(16), 2,
      sym_redir,
      aux_sym_cmd_repeat2,
    ACTIONS(84), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [513] = 7,
    ACTIONS(88), 1,
      anon_sym_LBRACK,
    STATE(2), 1,
      sym_cmd_name,
    STATE(18), 1,
      aux_sym_pipeline_repeat1,
    STATE(62), 1,
      sym_cmd,
    ACTIONS(91), 2,
      sym_istr,
      sym_str,
    ACTIONS(94), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(13), 3,
      sym__expr,
      sym__value,
      sym__word,
  [540] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    STATE(22), 1,
      aux_sym__value_repeat1,
    ACTIONS(99), 2,
      sym_istr,
      sym_str,
    ACTIONS(101), 2,
      sym_int,
      sym_identifier,
    STATE(55), 2,
      sym__strong_expr,
      sym__value,
  [562] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      aux_sym__value_repeat1,
    ACTIONS(105), 2,
      sym_istr,
      sym_str,
    ACTIONS(107), 2,
      sym_int,
      sym_identifier,
    STATE(57), 2,
      sym__strong_expr,
      sym__value,
  [584] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACK,
    ACTIONS(109), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      aux_sym__value_repeat1,
    ACTIONS(111), 2,
      sym_istr,
      sym_str,
    ACTIONS(113), 2,
      sym_int,
      sym_identifier,
    STATE(56), 2,
      sym__strong_expr,
      sym__value,
  [606] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      aux_sym__value_repeat1,
    ACTIONS(117), 2,
      sym_istr,
      sym_str,
    ACTIONS(119), 2,
      sym_int,
      sym_identifier,
    STATE(52), 2,
      sym__strong_expr,
      sym__value,
  [628] = 2,
    ACTIONS(123), 2,
      anon_sym_PIPE,
      anon_sym_GT,
    ACTIONS(121), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT_GT,
  [642] = 6,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      aux_sym__value_repeat1,
    ACTIONS(130), 2,
      sym_istr,
      sym_str,
    ACTIONS(133), 2,
      sym_int,
      sym_identifier,
    STATE(64), 2,
      sym__strong_expr,
      sym__value,
  [664] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 2,
      sym_istr,
      sym_str,
    ACTIONS(138), 3,
      sym_int,
      sym_identifier,
      sym_word,
    STATE(23), 3,
      sym__expr,
      sym__value,
      sym__word,
  [682] = 4,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 2,
      sym_istr,
      sym_str,
    ACTIONS(144), 2,
      sym_int,
      sym_identifier,
    STATE(42), 2,
      sym__strong_expr,
      sym__value,
  [698] = 2,
    ACTIONS(148), 3,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(146), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [710] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 2,
      sym_istr,
      sym_str,
    ACTIONS(144), 2,
      sym_int,
      sym_identifier,
    STATE(42), 2,
      sym__strong_expr,
      sym__value,
  [726] = 2,
    ACTIONS(152), 3,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(150), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [738] = 2,
    ACTIONS(156), 3,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(154), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [750] = 2,
    ACTIONS(160), 3,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(158), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [762] = 2,
    ACTIONS(164), 3,
      sym_int,
      sym_identifier,
      sym_word,
    ACTIONS(162), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_istr,
      sym_str,
  [774] = 2,
    ACTIONS(168), 1,
      anon_sym_PIPE,
    ACTIONS(166), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [785] = 2,
    ACTIONS(170), 3,
      anon_sym_LBRACK,
      sym_istr,
      sym_str,
    ACTIONS(172), 3,
      sym_int,
      sym_identifier,
      sym_word,
  [796] = 2,
    ACTIONS(174), 3,
      anon_sym_LBRACK,
      sym_istr,
      sym_str,
    ACTIONS(176), 3,
      sym_int,
      sym_identifier,
      sym_word,
  [807] = 2,
    ACTIONS(168), 1,
      anon_sym_PIPE,
    ACTIONS(178), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [818] = 2,
    ACTIONS(180), 2,
      sym_int,
      sym_identifier,
    ACTIONS(128), 4,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_istr,
      sym_str,
  [829] = 2,
    ACTIONS(184), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(182), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [839] = 4,
    ACTIONS(186), 1,
      anon_sym_in,
    ACTIONS(188), 1,
      sym_identifier,
    STATE(41), 1,
      aux_sym_cmd_var_stmt_repeat1,
    STATE(46), 1,
      sym_var_def,
  [852] = 4,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_in,
    STATE(39), 1,
      aux_sym_cmd_var_stmt_repeat1,
    STATE(49), 1,
      sym_var_def,
  [865] = 4,
    ACTIONS(192), 1,
      anon_sym_in,
    ACTIONS(194), 1,
      sym_identifier,
    STATE(41), 1,
      aux_sym_cmd_var_stmt_repeat1,
    STATE(66), 1,
      sym_var_def,
  [878] = 1,
    ACTIONS(197), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_in,
  [884] = 1,
    ACTIONS(50), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_in,
  [890] = 2,
    STATE(12), 1,
      sym_cmd_op,
    ACTIONS(199), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [898] = 1,
    ACTIONS(46), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_in,
  [904] = 3,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(205), 1,
      anon_sym_in,
  [914] = 1,
    ACTIONS(66), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_in,
  [920] = 1,
    ACTIONS(207), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [926] = 3,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    ACTIONS(211), 1,
      anon_sym_in,
  [936] = 2,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(215), 1,
      anon_sym_SEMI,
  [943] = 1,
    ACTIONS(217), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [948] = 2,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      anon_sym_RBRACK,
  [955] = 2,
    ACTIONS(215), 1,
      anon_sym_SEMI,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
  [962] = 1,
    ACTIONS(192), 2,
      anon_sym_in,
      sym_identifier,
  [967] = 2,
    ACTIONS(115), 1,
      anon_sym_RBRACK,
    ACTIONS(219), 1,
      anon_sym_COMMA,
  [974] = 2,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    ACTIONS(219), 1,
      anon_sym_COMMA,
  [981] = 2,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(225), 1,
      anon_sym_RBRACK,
  [988] = 1,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
  [992] = 1,
    ACTIONS(229), 1,
      anon_sym_EQ,
  [996] = 1,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
  [1000] = 1,
    ACTIONS(215), 1,
      anon_sym_SEMI,
  [1004] = 1,
    ACTIONS(233), 1,
      anon_sym_PIPE,
  [1008] = 1,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
  [1012] = 1,
    ACTIONS(219), 1,
      anon_sym_COMMA,
  [1016] = 1,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
  [1020] = 1,
    ACTIONS(203), 1,
      anon_sym_COMMA,
  [1024] = 1,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
  [1028] = 1,
    ACTIONS(241), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 86,
  [SMALL_STATE(5)] = 118,
  [SMALL_STATE(6)] = 163,
  [SMALL_STATE(7)] = 185,
  [SMALL_STATE(8)] = 207,
  [SMALL_STATE(9)] = 249,
  [SMALL_STATE(10)] = 291,
  [SMALL_STATE(11)] = 313,
  [SMALL_STATE(12)] = 352,
  [SMALL_STATE(13)] = 391,
  [SMALL_STATE(14)] = 411,
  [SMALL_STATE(15)] = 436,
  [SMALL_STATE(16)] = 463,
  [SMALL_STATE(17)] = 488,
  [SMALL_STATE(18)] = 513,
  [SMALL_STATE(19)] = 540,
  [SMALL_STATE(20)] = 562,
  [SMALL_STATE(21)] = 584,
  [SMALL_STATE(22)] = 606,
  [SMALL_STATE(23)] = 628,
  [SMALL_STATE(24)] = 642,
  [SMALL_STATE(25)] = 664,
  [SMALL_STATE(26)] = 682,
  [SMALL_STATE(27)] = 698,
  [SMALL_STATE(28)] = 710,
  [SMALL_STATE(29)] = 726,
  [SMALL_STATE(30)] = 738,
  [SMALL_STATE(31)] = 750,
  [SMALL_STATE(32)] = 762,
  [SMALL_STATE(33)] = 774,
  [SMALL_STATE(34)] = 785,
  [SMALL_STATE(35)] = 796,
  [SMALL_STATE(36)] = 807,
  [SMALL_STATE(37)] = 818,
  [SMALL_STATE(38)] = 829,
  [SMALL_STATE(39)] = 839,
  [SMALL_STATE(40)] = 852,
  [SMALL_STATE(41)] = 865,
  [SMALL_STATE(42)] = 878,
  [SMALL_STATE(43)] = 884,
  [SMALL_STATE(44)] = 890,
  [SMALL_STATE(45)] = 898,
  [SMALL_STATE(46)] = 904,
  [SMALL_STATE(47)] = 914,
  [SMALL_STATE(48)] = 920,
  [SMALL_STATE(49)] = 926,
  [SMALL_STATE(50)] = 936,
  [SMALL_STATE(51)] = 943,
  [SMALL_STATE(52)] = 948,
  [SMALL_STATE(53)] = 955,
  [SMALL_STATE(54)] = 962,
  [SMALL_STATE(55)] = 967,
  [SMALL_STATE(56)] = 974,
  [SMALL_STATE(57)] = 981,
  [SMALL_STATE(58)] = 988,
  [SMALL_STATE(59)] = 992,
  [SMALL_STATE(60)] = 996,
  [SMALL_STATE(61)] = 1000,
  [SMALL_STATE(62)] = 1004,
  [SMALL_STATE(63)] = 1008,
  [SMALL_STATE(64)] = 1012,
  [SMALL_STATE(65)] = 1016,
  [SMALL_STATE(66)] = 1020,
  [SMALL_STATE(67)] = 1024,
  [SMALL_STATE(68)] = 1028,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cmd_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cmd_repeat1, 2), SHIFT_REPEAT(19),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cmd_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cmd_repeat1, 2), SHIFT_REPEAT(4),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cmd_repeat1, 2), SHIFT_REPEAT(4),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 4),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 4),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 3),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 3),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cmd_list_repeat1, 2), SHIFT_REPEAT(19),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cmd_list_repeat1, 2), SHIFT_REPEAT(11),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cmd_list_repeat1, 2), SHIFT_REPEAT(13),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__cmd_list_repeat1, 2), SHIFT_REPEAT(13),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_name, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_name, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cmd_repeat2, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cmd_repeat2, 2),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cmd_repeat2, 2), SHIFT_REPEAT(35),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cmd_repeat2, 2), SHIFT_REPEAT(35),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 3),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(19),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(13),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(13),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__value_repeat1, 2), SHIFT_REPEAT(19),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__value_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__value_repeat1, 2), SHIFT_REPEAT(64),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value_repeat1, 2), SHIFT_REPEAT(64),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_vars, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_vars, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cmd_list_repeat1, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__cmd_list_repeat1, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_op, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_op, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_vars, 4),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_vars, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_vars, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_vars, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pipeline_repeat1, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_kind, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir_kind, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__value_repeat1, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_chain, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_chain_part, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cmd_var_stmt_repeat1, 2),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cmd_var_stmt_repeat1, 2), SHIFT_REPEAT(68),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_def, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_var_stmt, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_chain, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_var_stmt, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_list, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_chain_part, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd_list, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [227] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_ctx, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_ctx, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_rshcmd(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
