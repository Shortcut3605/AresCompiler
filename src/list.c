#include "include/list.h"
#include "include/token.h"
#include <stdlib.h>
#include <stdio.h>
List* list_create(int size){
    List* list = malloc(sizeof(List));
    list->size = size;
    list->items = malloc(sizeof(void*)*size);
    list->item_size = 0;
    return list;
}

void list_push(List* list, void* item){
    if(list->item_size < list->size){
        
        list->items[list->item_size++] = item;
        return;
    }
    list->size *= 2;
    list->items = realloc(list->items, sizeof(void*) * list->size);
    list->items[list->item_size++] = item;
}