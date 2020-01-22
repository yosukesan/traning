
#include <stdlib.h>

#include "linked_list.h"

static linked_list_t* linked_list_new(linked_list_t* list, const data_t data)
{
    if (list)
    {
        list = (linked_list_t*)malloc(sizeof(linked_list_t));         
    }
}

void linked_list_push_front(struct _linked_list** list, const data_t data)
{
    if (!*list)
    {
        *list = linked_list_new(*list, data);
    }

}

void linked_list_push_back(struct _linked_list** list, const data_t data)
{
    if (!*list)
    {
    }
}

void linked_list_sort(struct _linked_list** list)
{

}

void linked_list_delete(struct _linked_list* list)
{

}
