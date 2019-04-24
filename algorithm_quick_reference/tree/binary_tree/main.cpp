
#include <iostream>

using namespace std;

class BinaryTree
{
    int data;
    BinaryTree* right;
    BinaryTree* left;

public:
    BinaryTree();
    void insert(BinaryTree** tree, const int& value);
    void postOrder(BinaryTree** tree);
    virtual ~BinaryTree();
};

BinaryTree::BinaryTree()
: right(NULL), left(NULL)
{
}

BinaryTree::~BinaryTree()
{
}

void BinaryTree::insert(BinaryTree** tree, const int& value)
{
    if (!*tree)
    {
        BinaryTree* tmp = new BinaryTree();
        tmp->data = value;
        tmp->right = NULL;
        tmp->left = NULL;
        *tree = tmp;
        return;
    }

    if ((*tree)->data < value)
        insert(&((*tree)->right), value);
    else
        insert(&((*tree)->left), value);
}

void BinaryTree::postOrder(BinaryTree** tree)
{
    if ((*tree)->right)
        postOrder(&((*tree)->right));

    cout << (*tree)->data << endl;

    if ((*tree)->left)
        postOrder(&((*tree)->left));
}

int main()
{
    BinaryTree* bt = NULL;
    BinaryTree f;

    f.insert(&bt, 4);
    f.insert(&bt, -4);
    f.insert(&bt, 5);
    f.insert(&bt, -15);
    f.insert(&bt, 55);
    f.insert(&bt, 12);

    f.postOrder(&bt);

    return 0;
}
