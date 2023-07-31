#include <iostream>
using namespace std;

void print(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {

        cout << arr[i];
    }
}
void bubblesort(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size ; i++)
    {

        for (int j= 0; j < (size-1)-i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int array[] = {9, 7, 4, 6, 1};

    int n = sizeof(array) / sizeof(array[0]);
    bubblesort(array, n);
    print(array, n);
    return 0;
}