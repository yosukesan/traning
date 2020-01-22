
#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

#include "data.h"

typedef struct _linked_list
{
    data_t _data;
    struct _linked_list* _next;

    void (*free)(struct _linked_list* list);
    void (*push_back)(struct _linked_list** list, const data_t data);
    void (*push_front)(struct _linked_list** list, const data_t data);
    void (*sort)(struct _linked_list** list);
} linked_list_t;

static linked_list_t* linked_list_new(linked_list_t* list, const data_t data);
void linked_list_push_front(struct _linked_list** list, const data_t data);
void linked_list_push_back(struct _linked_list** list, const data_t data);
void linked_list_free(struct _linked_list* list);
void linked_list_sort(struct _linked_list** list);
#endif // __LINKED_LIST_H__
