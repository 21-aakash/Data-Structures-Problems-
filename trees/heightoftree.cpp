
   #include<bits/stdc++.h>
   using  namespace std ; 
#include "treenode.h"

   int height(treenode<int> *root)
{
   if (root == NULL)
   {
      return 0;
   }
   int ans = 0;

   for (int i = 0; i < root->children.size(); i++)
   {
      int h = height(root->children[i]);
      if (h > ans)
      {
         ans = h;
      }
   }
   return ans + 1;
}
   int main() 
{
 
   return 0;
    }



