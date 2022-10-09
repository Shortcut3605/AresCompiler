#ifndef PARSER_H
#define PARSER_H 
#include "list.h"
typedef struct Parser{
    List* tokenlist;
} Parser;

Parser* parser_create(List* list);


#endif