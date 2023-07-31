#include <bits/stdc++.h>
using namespace std;
#include "binarytree.h"

int countnodes(binarytree<int> *root)
{
    if (root == NULL)
        return 0;

    return 1 + countnodes(root->left) + countnodes(root->right);
}

void inorder(binarytree<int> *root)

{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void printlevelwise(binarytree<int> *root)
{

    queue<binarytree<int> *> pending;
    pending.push(root);

    while (pending.size() != 0)
    {
        binarytree<int> *front = pending.front();
        pending.pop();

        cout << front->data << ";";

        if (front->left != NULL)
        {
            cout << "L:" << front->left->data << ",";
            pending.push(front->left);
        }
        else
            cout << "L:" << -1;
        if (front->right != NULL)
        {
            cout << "R:" << front->right->data << endl;

            pending.push(front->right);
        }
        else
            cout << "R:" << -1 << endl;
    }
}

binarytree<int> *takeinputlevelwise()
{

    int rootdata;
    cout << " Enter root data :" << endl;
    cin >> rootdata;

    if (rootdata == -1)
    {
        return NULL;
    }
    binarytree<int> *root = new binarytree<int>(rootdata);

    queue<binarytree<int> *> pending;
    pending.push(root);

    while (pending.size() != 0)
    {
        binarytree<int> *front = pending.front();
        pending.pop();

        int leftchild;

        cout << "Enter left childata of  " << front->data << endl;
        cin >> leftchild;
        if (leftchild != -1)
        {
            binarytree<int> *left = new binarytree<int>(leftchild);
            front->left = left;
            pending.push(left);
        }
        int rightchild;

        cout << "Enter right childata of  " << front->data << endl;
        cin >> rightchild;
        if (rightchild != -1)
        {
            binarytree<int> *right = new binarytree<int>(rightchild);
            front->right = right;
            pending.push(right);
        }
    }
    return root;
}

binarytree<int> *takeinput()
{
    int rootdata;
    cout << " Enter data: " << endl;
    cin >> rootdata;

    if (rootdata == -1)
    {
        return NULL;
    }
    binarytree<int> *root = new binarytree<int>(rootdata);

    binarytree<int> *left = takeinput();

    binarytree<int> *right = takeinput();
    root->left = left;
    root->right = right;

    return root;
}
void printtree(binarytree<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ":";
    if (root->left != NULL)
    {
        cout << "L:" << root->left->data;
    }

    if (root->right != NULL)
    {
        cout << "R:" << root->right->data;
    }
    cout << endl;

    printtree(root->left);
    printtree(root->right);
}

int height(binarytree<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int ans = 1;

    int left = height(root->left);
    int right = height(root->right);

    if (left > right)
    {
        ans = left;
    }
    else
    {
        ans = right;
    }

    return ans + 1;
}
int diameter(binarytree<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int x = height(root->left) + height(root->right);
    int y = diameter(root->left);

    int z = diameter(root->right);

    return max(x, max(y, z));
}

pair<int , int> diameter2(binarytree<int>*root)
{
     if(root==NULL)
     {
          pair<int , int >p;
          p.first=0;
          p.second=0;
          return p;

     }

pair <int , int >left=diameter2(root->left);
pair <int , int >right=diameter2(root->right);

int lh, rh, ld, rd;
lh=left.first;
rh=right.first;
ld=left.second;
rd=right.second;


int height=1+ max(rh, lh);
int diameter = max( (lh+rh), max(ld, rd))


pair<int , int >p;
          p.first=height;
          p.second=diameter;
          return p;

}
int main()
{
    /*
        binarytree<int> *root = new binarytree<int>(1);
        binarytree<int> *node1 = new binarytree<int>(2);
        binarytree<int> *node2 = new binarytree<int>(3);

        root->left = node1;
        root->right= node2;
        */
    binarytree<int> *root = takeinputlevelwise();

     cout<<" Diameter of tree is : "<<diameter(root)<<endl;


    printlevelwise(root);
    delete root;

    return 0;
}