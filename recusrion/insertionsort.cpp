#include <iostream>
using namespace std;


insertionsort(int array[], int n )
{
   for (int i = 1; i < n; i++)
   {

      int temp= array[i];
      



/*while(j>=0)
{
   if(temp<array[j])
{
      array[j+1]=array[j];

}

   --j;

}

array[j+1]=temp;
*/

int j = i - 1;

      for (; j >= 0; --j)
      {


         if (temp< array[j])
         { 
              array[j+1]=array[j] ;
    
         }
      }
      array[j+1]=temp;

   }

   for (int i = 0; i < n; i++)
   {
      cout << array[i];
      /* code */
   }
}
int main()
{

   int n;
   cout << "ENTER ARRAY SIZE: ";
   cin >> n;

   int array[n];

   cout << " \n Enter array elments : ";
   for (int i = 0; i < n; i++)
   {
      cout << "\n Enter " << (i + 1) << "th element : ";
      cin >> array[i];
   }

   insertionsort( array,  n);

   return 0;
}