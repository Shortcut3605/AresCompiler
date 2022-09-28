#include "include/token.h"
#include <stdlib.h>
#include <stdio.h>


Token* token_create(int type, char* value){
    Token* tok = malloc(sizeof(struct Token));
    tok->type = type;
    tok->value = value;
    return tok;
}

const char* token_type_to_str(int type){
    switch(type){
        case TT_INT: return "INT"; break;
        case TT_FLOAT: return "FLOAT"; break;
        case TT_PLUS: return "PLUS"; break;
        case TT_MINUS: return "MINUS"; break;
        case TT_MUL: return "MUL"; break;
        case TT_DIV: return "DIV"; break;
        case TT_LPAREN: return "LPAREN"; break;
        case TT_RPAREN: return "RPAREN"; break;
        case TT_EOF: return "EOF"; break;
    }
}

void token_print(Token* tok){
    printf("<Token type = %s, value = %s>", token_type_to_str(type), (tok->value == NULL) ? "None" : tok->value);
    
}