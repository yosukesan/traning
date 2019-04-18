
#include <iostream>

using namespace std;

void insertion(int* arr, const int& length)
{
    for (int i=0; i<length; ++i)
    {
        for (int j=i; j<length; ++j)
        {
            if (arr[i] > arr[j])
            {
                const int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
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

    insertion(arr, sizeof(arr)/sizeof(arr[0]));
    print(arr, sizeof(arr)/sizeof(arr[0]));
    
    return 0;
}
