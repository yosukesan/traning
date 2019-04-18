
#include <iostream>

using namespace std;

int buf [32];

void merge(int* arr, const int& left, const int& mid, const int& right)
{
    int i = left;
    int j = mid;
    int k = 0;

    // search from both sides. symmetry bits
    while (i<mid && j<right)
    {
        if (arr[i] < arr[j])
        {
            buf[k++] = arr[i++];
        }
        else
        {
            buf[k++] = arr[j++];
        }
    }

    if (i==mid)
    {
        while (j < right)
        {
            buf[k++] = arr[j++];
        }
    }
    else
    {
        while (i<mid)
        {
            buf[k++] = arr[i++];
        }
    }
    
    for (int l=0; l<k; ++l)
        arr[left+l] = buf[l];
    
}

void merge_sort(int *arr, const int& left, const int&right)
{
    if (left == right || left == right-1) return; 

    const int mid = (right + left) / 2; 

    merge_sort(arr, left, mid); 
    merge_sort(arr, mid, right); 
    merge(arr, left, mid, right);
}

void print(int* arr, const int& length)
{
    for (int i=0; i<length; ++i)
        cout << arr[i] << " ";
}

int main()
{
    int arr[] = {8, -9, 10, 5, 4, 6, 12, -3, 5, -4, 22};
    const int tail = sizeof(arr)/sizeof(arr[0]);

    merge_sort(arr, 0, tail);
    print(arr, tail);

    return 0;
}
