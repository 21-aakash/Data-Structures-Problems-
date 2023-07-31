#include <bits/stdc++.h>
using namespace std;
#include "treenode.h"
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

 


    return 0;
}