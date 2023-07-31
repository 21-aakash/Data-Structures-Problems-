   #include<bits/stdc++.h>
   

   using  namespace std ; 
   #include "stackarray.h" // .h file are independent can used anywhere 
   #include <stack> //inbuilt liberary dor stacks 

 int main() 
{
 stack<int> aakash;

aakash.push(12);
aakash.push(13);
aakash.push(14);
aakash.push(15);
aakash.push(16);
aakash.push(17);
aakash.pop();
cout<<aakash.top()<<endl;
cout<<aakash.size()<<endl;
cout<<aakash.empty();




 cout<<aakash.top();


   return 0;
    }