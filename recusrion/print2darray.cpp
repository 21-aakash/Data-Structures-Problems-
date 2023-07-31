   #include<iostream>
   using  namespace std ; 


   int main() 
{
 

  int n, m ;
  cout<<" ENTER no of row  : ";
  cin>>n;

  cout<<" ENTER no of column : ";
  cin>>m;

int arr[n][m];


  cout<<" \nENTER ARRAY : ";

  for(int i=0; i<n; i++)
  {


  cout<<"\n";
  
    for(int j=0; j<m; j++)
      {

        cin>>arr[i][j];
      }

  }
  

  while(n)
{
  
  for(int i=0; i<m; i++)
  {

        cout<<arr[1][i]<<endl;

  }
 
  --n;
}
    
  while(n-1)
{
  
  for(int i=0; i<m; i++)
  {

        cout<<arr[2][i]<<endl;

  }
 
  --n;
}
    
  while(n-2)
{
  
  for(int i=0; i<m; i++)
  {

        cout<<arr[3][i]<<endl;

  }
 
  --n;
}
    



   return 0;
    }