
#include <iostream>
#include <string>

using namespace std;

const int ALPHABET_SIZE = 26;

struct TrieNode
{
    struct TrieNode *children[ALPHABET_SIZE];
    bool isEndOfWord;
};

struct TrieNode* getNode()
{
    struct TrieNode *node = new TrieNode;

    node->isEndOfWord = false;

    for (int i=0; i<ALPHABET_SIZE; ++i)
        node->children[i] = NULL;

    return node;
}

void insert(struct TrieNode* root, const string& key)
{
    struct TrieNode* crawl = root;

    for (int i=0; i<key.length(); ++i)
    {
        int index = key[i] - 'a';

        if (!crawl->children[index])
            crawl->children[index] = getNode();

        crawl = crawl->children[index];
    }

    crawl->isEndOfWord = true;
}

bool search(struct TrieNode* root, string key)
{
    struct TrieNode* crawl = root;

    for (int i=0; i<key.length(); ++i) 
    {
        int index = key[i] - 'a';
        if (crawl->children[index])
            return false;

        crawl = crawl->children[index];
    }

    return (crawl != NULL && crawl->isEndOfWord);
}

int main()
{
    string keys[] = {"the", "a", "there", "answer", "any", "by", "bye", "their"};

    const int N = sizeof(keys) / sizeof(keys[0]);

    struct TrieNode* root = getNode();

    for (int i=0; i<N; ++i)
        insert(root, keys[i]);

    cout << search(root, "the") << endl;
    cout << search(root, "these") << endl;
    cout << search(root, "answer") << endl;

    return 0;
}
