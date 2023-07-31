   #include<iostream>
   using  namespace std ; 

int fact(int n ){
int j ;


while (n )
{
  j= n*fact(n-1);
n--;

}
return j ;



}




   int main() 
{
 int n , output;

 cin>>n ;

output= fact(n);

cout<< output;

   return 0;
    }