#include <bits/stdc++.h>
#include <queue>
using namespace std;
#include "treenode.h"

void printlevelwise(treenode<int> *root) // print level wise
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

int countnode(treenode<int> *root) // count total no. of nodes in tree
{
   int ans = 1;
   for (int i = 0; i < root->children.size(); i++)
   {
      ans += countnode(root->children[i]);
   }
   return ans;
}

treenode<int> *takeinput() // take tree
{
   int nodedata;
   cout << " Enter node data: " << endl;
   cin >> nodedata;

   treenode<int> *root = new treenode<int>(nodedata);

   int n;
   cout << " Enter number of children of" << nodedata << endl;
   cin >> n;

   for (int i = 0; i < n; i++)
   {
      treenode<int> *child = takeinput();
      root->children.push_back(child);
   }
   return root;
}

void printtree(treenode<int> *root) // print tree
{

   // generally no base case is required for generic trees
   // edge case is required

   if (root == NULL)
   {
      return;
   }
   cout << root->data << ": ";
   for (int i = 0; i < root->children.size(); i++)
   {
      cout << root->children[i]->data << ", ";
   }
   cout << endl;

   for (int i = 0; i < root->children.size(); i++)
   {
      printtree(root->children[i]);
   }
}

int height(treenode<int> *root) // height of tree
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

void depth(treenode<int> *root, int k) // depth of tree
{
   if (root == NULL)
   {
      return;
   }
   if (k == 0)
   {
      cout << root->children->data;
      return;
   }
   int depth = 1;

   for (int i = 0; i < root->children->size(); i++)
   {
      depth(root->children[i]);
   }
}

int main()
{
   // treenode<int> *root = new treenode<int>(1); // root node

   // treenode<int> *node1 = new treenode<int>(2); // 1st node
   // treenode<int> *node2 = new treenode<int>(3); // 2nd node

   // connecting them

   //  root->children.push_back(node1);
   // root->children.push_back(node2);
   // printtree(root);

   treenode<int> *root = takeinputlevelwise();

   printlevelwise(root);
   cout << endl;

   cout << countnode(root);
   return 0;
}