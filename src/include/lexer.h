#ifndef LEXER_H
#define LEXER_H
#include "token.h"
#include "list.h"
typedef struct Lexer{
    char* src;
    int src_len;
    char c;
    int i;
} Lexer;

Lexer* lexer_create(char* src);

void lexer_advance(Lexer* lexer);

List* lexer_make_tokens(Lexer* lexer);



#endif