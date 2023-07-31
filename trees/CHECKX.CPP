#include <bits/stdc++.h>
using namespace std;

#include "treenode"

bool checkx(treenode<int> *root)
{
    if (root == NULL)
        return false;
}

bool temp = false;

if (root->data == x)
{
    temp = true;

    return temp;
}
for (int i = 0; i < root->children.size(); i++)
{
    bool ans = checkx(root->children[i]);
    if (ans == true)
    {
        temp = true;
        return ans;
    }
}
int main()
{

    return 0;
}