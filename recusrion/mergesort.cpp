#include <iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{

   int l=start;

   int u=mid+1;

   int C[end+1];



int k=0;

   
   while (l< mid+1 && u <=end )
   {
      if (arr[l] <= arr[u])
      {
         C[k] = arr[l];
         l++;
      }
      else
      {

         C[k] = arr[u];
         u++;
      }
      k++;
   }
while(l<mid)
   {

      C[k]=arr[l];
      l++;
      k++;
      

   }

   while(u<=end)
   {

      C[k]=arr[u];
      u++;
      k++;


   }

   for (int i = 0; i <=end; i++)
   {

      cout<< C[i];
      /* code */
   }
}
void mergesort(int arr[], int start, int end)
{

   if (start>=end )
      return; /// base case

   int mid = (start + end) / 2;
   mergesort(arr, start, mid);   // call
   mergesort(arr, mid + 1, end); // call

   merge(arr, start, mid, end);
}

int main()
{

   int n;
   cout << " Enter number of elements in array : ";
   cin >> n;

   int array[n];

   for (int i = 0; i < n; i++)
   {
      cout<< " \n Enter " << (i + 1) << " th element : ";
      cin >>array[i];
      /* code */
   }

   mergesort(array, 0, n - 1);

   return 0;
}