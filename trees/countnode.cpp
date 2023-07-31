
   #include<bits/stdc++.h>
   using  namespace std ; 
   #include "treenode.h"
   
   treenode<int> *takeinputlevelwise() // take tree level wise
{
   int nodedata;
   cout << "root data : " << endl;
   cin >> nodedata;

   treenode<int> *root = new treenode<int>(nodedata);

   queue<treenode<int> *> pendingnode; //

   pendingnode.push(root);

   while (pendingnode.size() != 0)
   {
      treenode<int> *front = pendingnode.front();
      pendingnode.pop();

      int numchild;

      cout << " enter no of child of " << front->data << endl;
      cin >> numchild;

      for (int i = 0; i < numchild; i++)
      {
         int childdata;
         cout << " Enter child" << (i + 1) << " data for " << front->data << endl;
         cin >> childdata;

         treenode<int> *child = new treenode<int>(childdata);
         front->children.push_back(child);
         pendingnode.push(child);
      }
   }
   return root;
}
   int countnode(treenode<int> *root)
{
   int ans = 1;
   for (int i = 0; i < root->children.size(); i++)
   {
      ans += countnode(root->children[i]);
   }
   return ans;
}
   int main() 
{ 
    treenode<int> *root = takeinputlevelwise();
   cout<< countnode(root);





 
   return 0;
    }


