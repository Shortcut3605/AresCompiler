#ifndef TOKEN_H
#define TOKEN_H

typedef struct Token {
    enum {
        TT_INT,
        TT_FLOAT,
        TT_PLUS,
        TT_MINUS,
        TT_MUL,
        TT_DIV,
        TT_LPAREN,
        TT_RPAREN,
        TT_EOF,
    } type;
    char* value;
} Token;

Token* token_create(int type, char* value);

const char* token_type_to_str(int type);

void token_print(Token* tok);

#endif