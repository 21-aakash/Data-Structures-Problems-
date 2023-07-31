   #include<iostream>
   using  namespace std ; 
   int main() 
{
 


  int *p= new int ; 
  *p = 100;
 *p= *p+1;


   cout<<" "<<*p<<" ";

double *pd= new double;
char *pc= new  char;

int *r = new int [50];


for (int  i = 0; i <50; i++)
{
  cout<<*r++;
    
}


   return 0;
    }