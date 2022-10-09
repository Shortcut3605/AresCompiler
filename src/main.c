#include "include/lexer.h"
#include "include/list.h"
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char** argv){
    Lexer* lexer = lexer_create("+");
    List* list = lexer_make_tokens(lexer);
    for(int i = 0; i < list->item_size; i++){
        token_print((Token*)list->items[i]);
        printf("\n");
    }
    while(1){

    }
    free(lexer);
}