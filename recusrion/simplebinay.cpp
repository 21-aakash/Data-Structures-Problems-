#include <bits/stdc++.h>
using namespace std;

// binary search for array



int binarysearch(int array[], int size, int tmp)
{

    int beg = 0, last = size - 1;

   int  mid = (beg + last) / 2;

    if (array[mid] == tmp)
        return mid;

    else if (array[mid] > tmp)
    {
        beg = 0 ;
        last = mid - 1;
    }
    else
    {
        beg = mid + 1;
        last = size - 1;
    }

    for (int i = beg; i <= last; i++)
    {

        if (array[i] == tmp)
            return i;
    }
}

int main()
{

    int arr[5] = {7, 5, 2, 4, 9};
    cout << binarysearch(arr, 5, 9);

    return 0;
}