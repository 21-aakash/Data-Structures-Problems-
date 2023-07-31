   #include<bits/stdc++.h>
   using  namespace std ; 
   #include "treenode.h"
   void printlevelwise(treenode<int> *root)
{

   queue<treenode<int> *> pending;
   pending.push(root);

   while (pending.size() != 0)
   {
      treenode<int> *front = pending.front();
      pending.pop();

      cout << front->data << " : ";
      for (int i = 0; i < front->children.size(); i++)
      {
         if (i == front->children.size() - 1)
            cout << front->children[i]->data;
         else
            cout << front->children[i]->data << ",";
         pending.push(front->children[i]);
      }
      cout << endl;
   }
}
   int main() 
{
 
   return 0;
    }