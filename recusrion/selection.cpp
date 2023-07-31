#include <iostream>
using namespace std;

void sort(int arr[], int size)
{                                                                                                                                                                                                                
   int temp, small, pos;

   for (int i = 0; i < size - 1; i++)
   {
      small = arr[i];                                                                                    
                                                                                                                  
      for (int j = i+1; j < size ; j++)
      {

         if (arr[j] < small)
         {
            small = arr[j];
            pos = j;
         }
      }
      temp = arr[i];
      arr[i] = arr[pos];
      arr[pos] = temp;
   }
}

void see(int arr[], int size)

{
   for (int i = 0; i < size; i++)
   {
      cout<< arr[i];
   }
}

int main()
{

   int n;
   cout << "Enter size of array : ";
   cin >> n;

   int array[n];

   cout << " \nEnter array elments : "; 

       for (int i=0; i < n; i++)
   {
      cout<<"\nEnter" << (i + 1)<<"th element : ";
      cin>>array[i];
   }

  
   sort(array, n);
   see(array, n);

   return 0;
}