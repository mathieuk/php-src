/* Generated by re2c 0.13.5 */
#line 1 "ext/pdo/pdo_sql_parser.re"
/*
  +----------------------------------------------------------------------+
  | PHP Version 7                                                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997-2016 The PHP Group                                |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author: George Schlossnagle <george@omniti.com>                      |
  +----------------------------------------------------------------------+
*/

/* $Id$ */

#include "php.h"
#include "php_pdo_driver.h"
#include "php_pdo_int.h"

#define PDO_PARSER_TEXT 1
#define PDO_PARSER_BIND 2
#define PDO_PARSER_BIND_POS 3
#define PDO_PARSER_EOI 4

#define RET(i) {s->cur = cursor; return i; }
#define SKIP_ONE(i) {s->cur = s->tok + 1; return i; }

#define YYCTYPE         unsigned char
#define YYCURSOR        cursor
#define YYLIMIT         s->end
#define YYMARKER        s->ptr
#define YYFILL(n)		{ RET(PDO_PARSER_EOI); }

typedef struct Scanner {
	char 	*ptr, *cur, *tok, *end;
} Scanner;

static int scan(Scanner *s)
{
	char *cursor = s->cur;

	s->tok = cursor;
	#line 55 "ext/pdo/pdo_sql_parser.re"


	
#line 55 "ext/pdo/pdo_sql_parser.c"
{
	YYCTYPE yych;
	unsigned int yyaccept = 0;

	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
	case 0x00:	goto yy2;
	case '"':	goto yy3;
	case '\'':	goto yy5;
	case '-':	goto yy11;
	case '/':	goto yy9;
	case ':':	goto yy6;
	case '?':	goto yy7;
	default:	goto yy12;
	}
yy2:
	YYCURSOR = YYMARKER;
	switch (yyaccept) {
	case 0: 	goto yy4;
	case 1: 	goto yy10;
	}
yy3:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych >= 0x01) goto yy43;
yy4:
#line 63 "ext/pdo/pdo_sql_parser.re"
	{ SKIP_ONE(PDO_PARSER_TEXT); }
#line 85 "ext/pdo/pdo_sql_parser.c"
yy5:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych <= 0x00) goto yy4;
	goto yy38;
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy32;
	case ':':	goto yy35;
	default:	goto yy4;
	}
yy7:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '?':	goto yy29;
	default:	goto yy8;
	}
yy8:
#line 62 "ext/pdo/pdo_sql_parser.re"
	{ RET(PDO_PARSER_BIND_POS); }
#line 169 "ext/pdo/pdo_sql_parser.c"
yy9:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '*':	goto yy19;
	default:	goto yy13;
	}
yy10:
#line 65 "ext/pdo/pdo_sql_parser.re"
	{ RET(PDO_PARSER_TEXT); }
#line 179 "ext/pdo/pdo_sql_parser.c"
yy11:
	yych = *++YYCURSOR;
	switch (yych) {
	case '-':	goto yy14;
	default:	goto yy13;
	}
yy12:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy13:
	switch (yych) {
	case 0x00:
	case '"':
	case '\'':
	case ':':
	case '?':	goto yy10;
	default:	goto yy12;
	}
yy14:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 0x00:
	case '"':
	case '\'':
	case ':':
	case '?':	goto yy17;
	case '\n':
	case '\r':	goto yy12;
	default:	goto yy14;
	}
yy16:
#line 64 "ext/pdo/pdo_sql_parser.re"
	{ RET(PDO_PARSER_TEXT); }
#line 216 "ext/pdo/pdo_sql_parser.c"
yy17:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '\n':
	case '\r':	goto yy16;
	default:	goto yy17;
	}
yy19:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 0x00:
	case '"':
	case '\'':
	case ':':
	case '?':	goto yy21;
	case '*':	goto yy23;
	default:	goto yy19;
	}
yy21:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '*':	goto yy26;
	default:	goto yy21;
	}
yy23:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
	case 0x00:
	case '"':
	case '\'':
	case ':':
	case '?':	goto yy21;
	case '*':	goto yy23;
	case '/':	goto yy25;
	default:	goto yy19;
	}
yy25:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x00:
	case '"':
	case '\'':
	case ':':
	case '?':	goto yy16;
	default:	goto yy12;
	}
yy26:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '*':	goto yy26;
	case '/':	goto yy28;
	default:	goto yy21;
	}
yy28:
	yych = *++YYCURSOR;
	goto yy16;
yy29:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '?':	goto yy29;
	default:	goto yy31;
	}
yy31:
#line 60 "ext/pdo/pdo_sql_parser.re"
	{ RET(PDO_PARSER_TEXT); }
#line 296 "ext/pdo/pdo_sql_parser.c"
yy32:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy32;
	default:	goto yy34;
	}
yy34:
#line 61 "ext/pdo/pdo_sql_parser.re"
	{ RET(PDO_PARSER_BIND); }
#line 370 "ext/pdo/pdo_sql_parser.c"
yy35:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case ':':	goto yy35;
	default:	goto yy31;
	}
yy37:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy38:
	switch (yych) {
	case 0x00:	goto yy2;
	case '\'':	goto yy40;
	case '\\':	goto yy39;
	default:	goto yy37;
	}
yy39:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= 0x00) goto yy2;
	goto yy37;
yy40:
	++YYCURSOR;
#line 59 "ext/pdo/pdo_sql_parser.re"
	{ RET(PDO_PARSER_TEXT); }
#line 400 "ext/pdo/pdo_sql_parser.c"
yy42:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy43:
	switch (yych) {
	case 0x00:	goto yy2;
	case '"':	goto yy45;
	case '\\':	goto yy44;
	default:	goto yy42;
	}
yy44:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= 0x00) goto yy2;
	goto yy42;
yy45:
	++YYCURSOR;
#line 58 "ext/pdo/pdo_sql_parser.re"
	{ RET(PDO_PARSER_TEXT); }
#line 422 "ext/pdo/pdo_sql_parser.c"
}
#line 66 "ext/pdo/pdo_sql_parser.re"

}

struct placeholder {
	char *pos;
	size_t len;
	int bindno;
	size_t qlen;		/* quoted length of value */
	char *quoted;	/* quoted value */
	int freeq;
	struct placeholder *next;
};

static void free_param_name(zval *el) {
	efree(Z_PTR_P(el));
}

PDO_API int pdo_parse_params(pdo_stmt_t *stmt, char *inquery, size_t inquery_len,
	char **outquery, size_t *outquery_len)
{
	Scanner s;
	char *ptr, *newbuffer;
	int t;
	int bindno = 0;
	int ret = 0;
	size_t newbuffer_len;
	HashTable *params;
	struct pdo_bound_param_data *param;
	int query_type = PDO_PLACEHOLDER_NONE;
	struct placeholder *placeholders = NULL, *placetail = NULL, *plc = NULL;

	ptr = *outquery;
	s.cur = inquery;
	s.end = inquery + inquery_len + 1;

	/* phase 1: look for args */
	while((t = scan(&s)) != PDO_PARSER_EOI) {
		if (t == PDO_PARSER_BIND || t == PDO_PARSER_BIND_POS) {
			if (t == PDO_PARSER_BIND) {
				int len = s.cur - s.tok;
				if ((inquery < (s.cur - len)) && isalnum(*(s.cur - len - 1))) {
					continue;
				}
				query_type |= PDO_PLACEHOLDER_NAMED;
			} else {
				query_type |= PDO_PLACEHOLDER_POSITIONAL;
			}

			plc = emalloc(sizeof(*plc));
			memset(plc, 0, sizeof(*plc));
			plc->next = NULL;
			plc->pos = s.tok;
			plc->len = s.cur - s.tok;
			plc->bindno = bindno++;

			if (placetail) {
				placetail->next = plc;
			} else {
				placeholders = plc;
			}
			placetail = plc;
		}
	}

	if (bindno == 0) {
		/* nothing to do; good! */
		return 0;
	}

	/* did the query make sense to me? */
	if (query_type == (PDO_PLACEHOLDER_NAMED|PDO_PLACEHOLDER_POSITIONAL)) {
		/* they mixed both types; punt */
		pdo_raise_impl_error(stmt->dbh, stmt, "HY093", "mixed named and positional parameters");
		ret = -1;
		goto clean_up;
	}

	if (stmt->supports_placeholders == query_type && !stmt->named_rewrite_template) {
		/* query matches native syntax */
		ret = 0;
		goto clean_up;
	}

	if (stmt->named_rewrite_template) {
		/* magic/hack.
		 * We we pretend that the query was positional even if
		 * it was named so that we fall into the
		 * named rewrite case below.  Not too pretty,
		 * but it works. */
		query_type = PDO_PLACEHOLDER_POSITIONAL;
	}

	params = stmt->bound_params;

	/* Do we have placeholders but no bound params */
	if (bindno && !params && stmt->supports_placeholders == PDO_PLACEHOLDER_NONE) {
		pdo_raise_impl_error(stmt->dbh, stmt, "HY093", "no parameters were bound");
		ret = -1;
		goto clean_up;
	}

	if (params && bindno != zend_hash_num_elements(params) && stmt->supports_placeholders == PDO_PLACEHOLDER_NONE) {
		/* extra bit of validation for instances when same params are bound more than once */
		if (query_type != PDO_PLACEHOLDER_POSITIONAL && bindno > zend_hash_num_elements(params)) {
			int ok = 1;
			for (plc = placeholders; plc; plc = plc->next) {
				if ((param = zend_hash_str_find_ptr(params, plc->pos, plc->len)) == NULL) {
					ok = 0;
					break;
				}
			}
			if (ok) {
				goto safe;
			}
		}
		pdo_raise_impl_error(stmt->dbh, stmt, "HY093", "number of bound variables does not match number of tokens");
		ret = -1;
		goto clean_up;
	}
safe:
	/* what are we going to do ? */
	if (stmt->supports_placeholders == PDO_PLACEHOLDER_NONE) {
		/* query generation */

		newbuffer_len = inquery_len;

		/* let's quote all the values */
		for (plc = placeholders; plc; plc = plc->next) {
			if (query_type == PDO_PLACEHOLDER_POSITIONAL) {
				param = zend_hash_index_find_ptr(params, plc->bindno);
			} else {
				param = zend_hash_str_find_ptr(params, plc->pos, plc->len);
			}
			if (param == NULL) {
				/* parameter was not defined */
				ret = -1;
				pdo_raise_impl_error(stmt->dbh, stmt, "HY093", "parameter was not defined");
				goto clean_up;
			}
			if (stmt->dbh->methods->quoter) {
				zval *parameter;
				if (Z_ISREF(param->parameter)) {
					parameter = Z_REFVAL(param->parameter);
				} else {
					parameter = &param->parameter;
				}
				if (param->param_type == PDO_PARAM_LOB && Z_TYPE_P(parameter) == IS_RESOURCE) {
					php_stream *stm;

					php_stream_from_zval_no_verify(stm, parameter);
					if (stm) {
						zend_string *buf;

						buf = php_stream_copy_to_mem(stm, PHP_STREAM_COPY_ALL, 0);
						if (!buf) {
							buf = ZSTR_EMPTY_ALLOC();
						}
						if (!stmt->dbh->methods->quoter(stmt->dbh, ZSTR_VAL(buf), ZSTR_LEN(buf), &plc->quoted, &plc->qlen,
								param->param_type)) {
							/* bork */
							ret = -1;
							strncpy(stmt->error_code, stmt->dbh->error_code, 6);
							if (buf) {
								zend_string_release(buf);
							}
							goto clean_up;
						}
						if (buf) {
							zend_string_release(buf);
						}
					} else {
						pdo_raise_impl_error(stmt->dbh, stmt, "HY105", "Expected a stream resource");
						ret = -1;
						goto clean_up;
					}
					plc->freeq = 1;
				} else {
					zval tmp_param;
				   	ZVAL_DUP(&tmp_param, parameter);
					switch (Z_TYPE(tmp_param)) {
						case IS_NULL:
							plc->quoted = "NULL";
							plc->qlen = sizeof("NULL")-1;
							plc->freeq = 0;
							break;

						case IS_FALSE:
						case IS_TRUE:
							convert_to_long(&tmp_param);
							/* fall through */
						case IS_LONG:
						case IS_DOUBLE:
							convert_to_string(&tmp_param);
							plc->qlen = Z_STRLEN(tmp_param);
							plc->quoted = estrdup(Z_STRVAL(tmp_param));
							plc->freeq = 1;
							break;

						default:
							convert_to_string(&tmp_param);
							if (!stmt->dbh->methods->quoter(stmt->dbh, Z_STRVAL(tmp_param),
									Z_STRLEN(tmp_param), &plc->quoted, &plc->qlen,
									param->param_type)) {
								/* bork */
								ret = -1;
								strncpy(stmt->error_code, stmt->dbh->error_code, 6);
								goto clean_up;
							}
							plc->freeq = 1;
					}
					zval_dtor(&tmp_param);
				}
			} else {
				zval *parameter;
				if (Z_ISREF(param->parameter)) {
					parameter = Z_REFVAL(param->parameter);
				} else {
					parameter = &param->parameter;
				}
				plc->quoted = Z_STRVAL_P(parameter);
				plc->qlen = Z_STRLEN_P(parameter);
			}
			newbuffer_len += plc->qlen;
		}

rewrite:
		/* allocate output buffer */
		newbuffer = emalloc(newbuffer_len + 1);
		*outquery = newbuffer;

		/* and build the query */
		plc = placeholders;
		ptr = inquery;

		do {
			t = plc->pos - ptr;
			if (t) {
				memcpy(newbuffer, ptr, t);
				newbuffer += t;
			}
			memcpy(newbuffer, plc->quoted, plc->qlen);
			newbuffer += plc->qlen;
			ptr = plc->pos + plc->len;

			plc = plc->next;
		} while (plc);

		t = (inquery + inquery_len) - ptr;
		if (t) {
			memcpy(newbuffer, ptr, t);
			newbuffer += t;
		}
		*newbuffer = '\0';
		*outquery_len = newbuffer - *outquery;

		ret = 1;
		goto clean_up;

	} else if (query_type == PDO_PLACEHOLDER_POSITIONAL) {
		/* rewrite ? to :pdoX */
		char *name, *idxbuf;
		const char *tmpl = stmt->named_rewrite_template ? stmt->named_rewrite_template : ":pdo%d";
		int bind_no = 1;

		newbuffer_len = inquery_len;

		if (stmt->bound_param_map == NULL) {
			ALLOC_HASHTABLE(stmt->bound_param_map);
			zend_hash_init(stmt->bound_param_map, 13, NULL, free_param_name, 0);
		}

		for (plc = placeholders; plc; plc = plc->next) {
			int skip_map = 0;
			char *p;
			name = estrndup(plc->pos, plc->len);

			/* check if bound parameter is already available */
			if (!strcmp(name, "?") || (p = zend_hash_str_find_ptr(stmt->bound_param_map, name, plc->len)) == NULL) {
				spprintf(&idxbuf, 0, tmpl, bind_no++);
			} else {
				idxbuf = estrdup(p);
				skip_map = 1;
			}

			plc->quoted = idxbuf;
			plc->qlen = strlen(plc->quoted);
			plc->freeq = 1;
			newbuffer_len += plc->qlen;

			if (!skip_map && stmt->named_rewrite_template) {
				/* create a mapping */
				zend_hash_str_update_mem(stmt->bound_param_map, name, plc->len, idxbuf, plc->qlen + 1);
			}

			/* map number to name */
			zend_hash_index_update_mem(stmt->bound_param_map, plc->bindno, idxbuf, plc->qlen + 1);

			efree(name);
		}

		goto rewrite;

	} else {
		/* rewrite :name to ? */

		newbuffer_len = inquery_len;

		if (stmt->bound_param_map == NULL) {
			ALLOC_HASHTABLE(stmt->bound_param_map);
			zend_hash_init(stmt->bound_param_map, 13, NULL, free_param_name, 0);
		}

		for (plc = placeholders; plc; plc = plc->next) {
			char *name;
			name = estrndup(plc->pos, plc->len);
			zend_hash_index_update_mem(stmt->bound_param_map, plc->bindno, name, plc->len + 1);
			efree(name);
			plc->quoted = "?";
			plc->qlen = 1;
		}

		goto rewrite;
	}

clean_up:

	while (placeholders) {
		plc = placeholders;
		placeholders = plc->next;

		if (plc->freeq) {
			efree(plc->quoted);
		}

		efree(plc);
	}

	return ret;
}

#if 0
int old_pdo_parse_params(pdo_stmt_t *stmt, char *inquery, int inquery_len, char **outquery,
		int *outquery_len)
{
	Scanner s;
	char *ptr;
	int t;
	int bindno = 0;
	int newbuffer_len;
	int padding;
	HashTable *params = stmt->bound_params;
	struct pdo_bound_param_data *param;
	/* allocate buffer for query with expanded binds, ptr is our writing pointer */
	newbuffer_len = inquery_len;

	/* calculate the possible padding factor due to quoting */
	if(stmt->dbh->max_escaped_char_length) {
		padding = stmt->dbh->max_escaped_char_length;
	} else {
		padding = 3;
	}
	if(params) {
		ZEND_HASH_FOREACH_PTR(params, param) {
			if(param->parameter) {
				convert_to_string(param->parameter);
				/* accommodate a string that needs to be fully quoted
                   bind placeholders are at least 2 characters, so
                   the accommodate their own "'s
                */
				newbuffer_len += padding * Z_STRLEN_P(param->parameter);
			}
		} ZEND_HASH_FOREACH_END();
	}
	*outquery = (char *) emalloc(newbuffer_len + 1);
	*outquery_len = 0;

	ptr = *outquery;
	s.cur = inquery;
	while((t = scan(&s)) != PDO_PARSER_EOI) {
		if(t == PDO_PARSER_TEXT) {
			memcpy(ptr, s.tok, s.cur - s.tok);
			ptr += (s.cur - s.tok);
			*outquery_len += (s.cur - s.tok);
		}
		else if(t == PDO_PARSER_BIND) {
			if(!params) {
				/* error */
				efree(*outquery);
				*outquery = NULL;
				return (int) (s.cur - inquery);
			}
			/* lookup bind first via hash and then index */
			/* stupid keys need to be null-terminated, even though we know their length */
			if((NULL != (param = zend_hash_str_find_ptr(params, s.tok, s.cur-s.tok))
			    ||
			   NULL != (params = zend_hash_index_find_ptr(params, bindno)))
			{
				char *quotedstr;
				int quotedstrlen;
				/* restore the in-string key, doesn't need null-termination here */
				/* currently everything is a string here */

				/* quote the bind value if necessary */
				if(stmt->dbh->methods->quoter(stmt->dbh, Z_STRVAL_P(param->parameter),
					Z_STRLEN_P(param->parameter), &quotedstr, &quotedstrlen))
				{
					memcpy(ptr, quotedstr, quotedstrlen);
					ptr += quotedstrlen;
					*outquery_len += quotedstrlen;
					efree(quotedstr);
				} else {
					memcpy(ptr, Z_STRVAL_P(param->parameter), Z_STRLEN_P(param->parameter));
					ptr += Z_STRLEN_P(param->parameter);
					*outquery_len += (Z_STRLEN_P(param->parameter));
				}
			}
			else {
				/* error and cleanup */
				efree(*outquery);
				*outquery = NULL;
				return (int) (s.cur - inquery);
			}
			bindno++;
		}
		else if(t == PDO_PARSER_BIND_POS) {
			if(!params) {
				/* error */
				efree(*outquery);
				*outquery = NULL;
				return (int) (s.cur - inquery);
			}
			/* lookup bind by index */
			if(NULL != (params = zend_hash_index_find_ptr(params, bindno)))
			{
				char *quotedstr;
				int quotedstrlen;
				/* currently everything is a string here */

				/* quote the bind value if necessary */
				if(stmt->dbh->methods->quoter(stmt->dbh, Z_STRVAL_P(param->parameter),
					Z_STRLEN_P(param->parameter), &quotedstr, &quotedstrlen))
				{
					memcpy(ptr, quotedstr, quotedstrlen);
					ptr += quotedstrlen;
					*outquery_len += quotedstrlen;
					efree(quotedstr);
				} else {
					memcpy(ptr, Z_STRVAL_P(param->parameter), Z_STRLEN_P(param->parameter));
					ptr += Z_STRLEN_P(param->parameter);
					*outquery_len += (Z_STRLEN_P(param->parameter));
				}
			}
			else {
				/* error and cleanup */
				efree(*outquery);
				*outquery = NULL;
				return (int) (s.cur - inquery);
			}
			bindno++;
		}
	}
	*ptr = '\0';
	return 0;
}
#endif

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker ft=c
 * vim<600: noet sw=4 ts=4
 */
