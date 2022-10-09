#ifndef LEXER_H
#define LEXER_H
#include "token.h"
typedef struct Lexer{
    char* src;
    size_t src_len;
    char c;
    unsigned int i;
} Lexer;

Lexer* init_lexer()

#endif