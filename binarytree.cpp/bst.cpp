#include <bits/stdc++.h>
using namespace std;
#include "binarytree.h"

bool searchInBST(BinaryTreeNode<int> *root, int k)
{
    // Write your code here

    if (root == NULL)
    {
        return false;
    }
    if (root->data == k)
    {

        return true;
    }

    if (root->data > k)
    {

        return searchInBST(root->left, k);
    }
    else
        return searchInBST(root->right, k);
}
int main()
{

    return 0;
}