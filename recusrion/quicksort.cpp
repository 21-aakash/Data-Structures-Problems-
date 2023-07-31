   #include<iostream>
   using  namespace std ; 
  int  partition(int arr[], int start, int end)
 {

    int count=0;


    int i=start+1;
    while(i<=end)
    {
        if(arr[i]<arr[start])
     {  count++;
          
    }
    i++;
    }
int x=start+count;

  int temp ;

  temp= arr[x];
  arr[x]=arr[start];
  arr[start]=temp;

int  j=x+1;

while(i<x&&j<=end)
{
   int temp;
   
     if(arr[i]<arr[x])
     i++;
     
    else  if(arr[j]>=arr[x])
     j++;

else
     { 
       
       temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
       i++;
       j++;
     }


 

}
return x;



 }
 void quicksort(int arr[], int start, int end)
 {

 int p ;

      if(start>=end)
      {
        return; 

      }

 p=partition(arr, start, end);

 quicksort(arr , start, p-1);
 quicksort(arr, p+1, end);


 }
   int main() 
{

    int  arr[]={5,4,3,2,1};
    
    quicksort(arr, 0, 4);

    for(int i=0; i<5; i++)
    {
        cout<<arr[i];
    }
   return 0;
    }