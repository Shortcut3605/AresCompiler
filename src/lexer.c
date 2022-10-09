#include "include/lexer.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
Lexer* lexer_create(char* src){
    Lexer* lexer = malloc(sizeof(Lexer));
    lexer->src = src;
    lexer->src_len = strlen(src);
    lexer->c = -1;
    lexer->i = 0;
    lexer_advance(lexer);
    return lexer; 
}

void lexer_advance(Lexer* lexer){
    if(lexer->i < lexer->src_len){
        lexer->c = lexer->src[lexer->i++];
      
        return;
    }
    lexer->c = -1;
}

List* lexer_make_tokens(Lexer* lexer){
    List* list = list_create(1);
    while(lexer->c != -1){
        switch(lexer->c){
            case '+': list_push(list, token_create(TT_PLUS, NULL)); break;
            case '\0': break;
        }
        lexer_advance(lexer);
    }
    return list;
}