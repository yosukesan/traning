
#include <stdio.h>
#include <stdlib.h>

typedef struct linked_list
{
    int data;
    struct linked_list* next;
    struct linked_list* prev;

    void (*push_front)(struct linked_list** list, const int value);
    void (*print)(struct linked_list** list);
} list_t;

static list_t* new_node(list_t* list, const int value)
{
    list_t *node;
    if (!list)
        node = (list_t*)malloc(sizeof(list_t));

    return list;    
}

void list_push_front(list_t** list, const int value)
{
    list_t *node = (list_t*)malloc(sizeof(list_t));
    node->data = value;

    if (!list)
    {
        node->next = NULL;
    }
    else
    {
        node->next = *list;
    }
    *list = node;
}

void list_print(list_t** list)
{
    while (*list)
    {
        printf("%d ", (*list)->data);
        list = &((*list)->next);
    }
    printf("\n");
}

int main()
{
    list_t* list = NULL;
    list_t func;

    func.push_front = list_push_front;
    func.push_front(&list, 5);
    func.push_front(&list, 3);
    func.push_front(&list, 6);
    func.push_front(&list, -33);
    func.push_front(&list, 12);

    func.print = list_print;
    func.print(&list);

    return 0;
}
