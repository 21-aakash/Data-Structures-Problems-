
#include <bits/stdc++.h>
using namespace std;

// int fib_helper(int n, int *arr)
// {
//     if (n <= 1) // base case
//         return n;

//     if (arr[n] != -1)
//         return arr[n]; // check the answer

//     int a = fib_helper(n - 1, arr);
//     int b = fib_helper(n - 2, arr);

//     arr[n] = a + b;

//     return arr[n];
// }

// int fibonnaci(int n)
// {
//     int *arr = new int[n + 1];
//     for (int i = 0; i <= n; i++)
//     {
//         arr[i] = -1;
//     }
//     return fib_helper(n, arr);
// }

int fibonnaci(int n )
{
     int *arr=new int [n+1];
  

     arr[0]=0;
     arr[1]=1;


     for( int i=2 ; i<=n ; i++)
     {

 arr[i]=arr[i-1]+arr[i-2];

     }
return arr[n];


}

int main()
{
    int n;
    cout << " Enter a number  \n";

    cin >> n;

    cout << fibonnaci(n);

    return 0;
}