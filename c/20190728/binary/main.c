
#include <stdlib.h>
#include <stdio.h>

typedef struct binary_tree
{
    int data;
    struct binary_tree* parent;
    struct binary_tree* right;
    struct binary_tree* left;

    void (*insert)(struct binary_tree** tree, const int value);
    void (*in_order)(struct binary_tree** tree);
    void (*delete)(struct binary_tree** tree, const int value);
} binary_tree_t;

static void _binary_tree_insert(binary_tree_t** tree, const int value, binary_tree_t* parent)
{
    if (!*tree)
    {
        *tree = (binary_tree_t*)malloc(sizeof(binary_tree_t));
        (*tree)->data = value;
        (*tree)->parent = parent;
        return;
    }

    if ((*tree)->data <= value)
        _binary_tree_insert(&((*tree)->right), value, *tree);
    else
        _binary_tree_insert(&((*tree)->left), value, *tree);
}

void binary_tree_insert(binary_tree_t** tree, const int value)
{
    if (!*tree)
    {
        *tree = (binary_tree_t*)malloc(sizeof(binary_tree_t));
        (*tree)->data = value;
        return;
    }

    if ((*tree)->data <= value)
        _binary_tree_insert(&((*tree)->right), value, *tree);
    else
        _binary_tree_insert(&((*tree)->left), value, *tree);
}

void in_order(binary_tree_t** tree)
{
    if ((*tree)->left)
        in_order(&((*tree)->left));

    printf("%d ", (*tree)->data);

    if ((*tree)->right)
        in_order(&((*tree)->right));
}

void binary_tree_delete(struct binary_tree** tree, const int value)
{
    if (tree == NULL) return;

    if (value < (*tree)->data)
        binary_tree_delete(&((*tree)->left), value);
    else if (value > (*tree)->data)
        binary_tree_delete(&((*tree)->right), value);
    else
    {
        if (!(*tree)->left)
        {
            binary_tree_t* tmp = (*tree)->right;
            free(*tree);
            *tree = tmp;
        }
        else if (!(*tree)->right)
        {
            binary_tree_t* tmp = (*tree)->left;
            free(*tree);
            *tree = tmp;
        }
    }
}

int main()
{
    binary_tree_t* tree = NULL; 
    binary_tree_t f; 

    f.insert = binary_tree_insert;  
    f.insert(&tree, 5);

    // left
    f.insert(&tree, -34);
    f.insert(&tree, -53);
    f.insert(&tree, -12);

    // right
    f.insert(&tree, 10);

    //f.in_order = in_order;
    //f.in_order(&tree);

    f.delete = binary_tree_delete;
    f.delete(&tree, -34);

    return 0;
}
