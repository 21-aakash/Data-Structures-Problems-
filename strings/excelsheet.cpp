   #include<bits/stdc++.h>
   using  namespace std ; 
 
    int titleToNumber(string columnTitle) {
        
int n =columnTitle.size();

long int  ans =0;

        for(int i=0 ; i<n ; i++)
        {
ans =26*ans+ columnTitle[i]-'A'+1;



        }
        return ans ;

    }

   int main() 
{
 
  string s="AAA";

cout<<titleToNumber(s);


   return 0;
    }