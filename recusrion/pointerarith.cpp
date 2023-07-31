   #include<iostream>
   using  namespace std ; 
   int main() 
{


    int i[3]={10, 20, 30};

 int *p=&i[0];

 p=p+1;

 cout<<*p;

   return 0;
    }