
#include <iostream>
#include <unordered_map>

using namespace std;

struct Trie
{
    bool is_leaf;
    unordered_map<char, Trie*> map;
};

//-----------------------------------------------------------------------------
Trie* getNewTrieNode ()
//-----------------------------------------------------------------------------
{
    Trie* node = new Trie;
    node->is_leaf = false;

    return node;
}

//-----------------------------------------------------------------------------
void insert(Trie*& head, char* str)
//-----------------------------------------------------------------------------
{
    if (head == nullptr)
        head = getNewTrieNode();

    Trie* curr = head;
    while (curr != nullptr)
    {
        if (curr->map.find(*str) == curr->map.end())
            curr->map[*str] = getNewTrieNode();

        // go to the next node
        curr = curr->map[*str];

        // move to next char
        str++;
    }

    curr->is_leaf = true;
}

//-----------------------------------------------------------------------------
bool haveChildren(Trie const *curr)
//-----------------------------------------------------------------------------
{
    for (auto it: curr->map)
        if (it.second != nullptr)
            return true;

    return false;
}

//-----------------------------------------------------------------------------
bool deletion (Trie*& curr, char* str)
//-----------------------------------------------------------------------------
{
    if (curr == nullptr)
        return false;

    if (*str)
    {
        if (curr != nullptr && curr->map.find(*str) != curr->map.end() && deletion(curr->map[*str], str+1) && curr->is_leaf == false)
        {
            if (!haveChildren(curr))
            {
                delete curr;
                curr = nullptr;
                return true;
            }
            else
            {
                return false;
            }
        }
    }

    if (*str == '\0' && curr->is_leaf) 
    {
        if (!haveChildren(curr))
        {
            delete curr;
            curr = nullptr;
            return true;
        }
        else
        {
            curr->is_leaf = false;
            return false;
        }

        return false;
    }

}

bool search(Trie* head, char* str)
{
    if (head == nullptr)
        return false;

    Trie* curr = head;
    while (*str)
    {
        curr = curr->map[*str];

        if (curr == nullptr)
            return false;

        str++;
    }

    return curr->is_leaf;
}

//-----------------------------------------------------------------------------
int main ()
//-----------------------------------------------------------------------------
{
    Trie* head = nullptr;

    insert(head, "hello");
    cout << search(head, "heallo") << endl;


    return 0;
}
