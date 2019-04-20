
#include <iostream>
#include <vector>

using namespace std;

class Hash {
    int key;
    vector<int> value; 

public:
    void init(const int& key)
    {
        value.reserve(key);
    }

    void store(const int& data)
    {
        //cout << data % key << endl;
        value[data % key] = data;
    } 

    bool find(const int& data)
    {
        return data == value[data % key]; 
    }
};

int find_missing(const vector<int>* arr1, const vector<int>* arr2)
{
    int key = ((*arr1).size() > (*arr2).size()) ? (*arr1).size() : (*arr2).size();

    Hash hash;
    hash.init(key);

    for (auto i: *arr1)
    {
       hash.store(i); 
    }

    for (auto i: *arr2) 
    {
        //cout << i << ": " << hash.find(i) << endl; 
        if (!hash.find(i))
            return i;
    }
}

int main()
{
    vector<int> arr1{3, 5, 10, 0, -8, 3};
    vector<int> arr2{3, 5, 10, 0, 9, -8, 3};

    cout << find_missing(&arr1, &arr2) << endl;
    return 0;
}
