
#include<iostream>

using namespace std;

void quick_sort(int* arr, const int& left, const int& right)
{
    if (left < right)
    {
        int i = left;
        int j = right;

        int tmp;
        const int pivot = arr[(i + j-1) / 2];
   
        while (1)
        {
            while (arr[i] < pivot) ++i;
            while (pivot < arr[j]) --j;
        
            if (i>=j) break;

            tmp = arr[i]; 
            arr[i] = arr[j];
            arr[j] = tmp;

            ++i;
            --j;

            quick_sort(arr, left, i-1);
            quick_sort(arr, j+1, right);
        }
    }
}

void print(int* arr, const int& length)
{
    for (int i=0; i<length; ++i)
        cout << arr[i] << " ";
}

int main()
{
    int arr[] = {8, -9, 10, 5, 4, 6, 12, -3, 5, -4, 22};
    //int arr[] = {8, -9, 10, 5, 4};
    const int tail = sizeof(arr)/sizeof(arr[0]);

    cout << tail << endl;

    quick_sort(arr, 0,  tail-1);
    print(arr, tail);

    return 0;
}
