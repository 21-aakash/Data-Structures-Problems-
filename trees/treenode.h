#include <bits/stdc++.h>
using namespace std;

template <typename T>
class treenode
{
public:
   T data;
   vector<treenode<T> *> children; // specifically mentioned

   treenode(T data)
   {
      this->data = data;
   }

   ~treenode()
   {
      for (int i = 0; i < children.size(); i++)
      {
         delete children[i];
      }
   }
};
