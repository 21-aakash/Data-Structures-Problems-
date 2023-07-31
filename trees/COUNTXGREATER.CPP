#include <bits/stdc++.h>
using namespace std;
#include "treenode.h"

int countx(treenode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int count = 0;

    if (root->data > x)
    {
        count++;
    }

    for (int i = 0; i < root->children.size(); i++)
    {
        count += countx(root->children[i]);
    }
    return count;
}
int main()
{
    
    return 0;
}