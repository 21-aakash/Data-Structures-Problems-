#include <bits/stdc++.h>
#include <queue>
using namespace std;

void ksort(int arr[], int k, int n)
{

    priority_queue<int> pq;

    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
    }

    int j = 0;

    for (int i = k; i < n; i++)
    {
        arr[j] = pq.top();
        pq.pop();
        pq.push(arr[i]);

        j++;
    }

    while (!pq.empty())
    {
        arr[j] = pq.top();
        pq.pop();
        j++;
    }
}

int main()
{

    cout << " Enter array elments to sort - enetr size?";
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << (i + 1) << " th element";
        cin >> arr[i];
    }
    int k;
    cout << " enter k: ";
    cin >> k;

    ksort(arr, n, k);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}