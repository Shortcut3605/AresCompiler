#ifndef LIST_H
#define LIST_H

typedef struct List {
    void** items;
    int size;
    int item_size;
} List;

List* list_create(int size);

void list_push(List* list, void* item);

#endif