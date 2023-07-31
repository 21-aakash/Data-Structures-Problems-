
   #include<bits/stdc++.h>
   using  namespace std ; 
   #include "treenode.h"
   int sumoftree(treenode<int>*root)
   {

      int sum=root->data;
      for(int i=0; i<root->children.size(); i++)
      {
                sum=sum+sumoftree(root->children[i]);      }
         return sum;

   }
   int main() 
{
 
   return 0;
    }