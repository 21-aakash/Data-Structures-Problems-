   #include<bits/stdc++.h>
   #include<binarytree.h>
   using  namespace std ;
   bool isbst(binarytree <int >*root , int min =INT_MIN, int max=INT_MAX)
   {
        if(root==NULL)return true;

        if(root->data<min|| root->data>max)
        return false;


        bool left = isbst(root->left , min ,root->data-1);
        bool right= isbst(root->right, root->data, max);
        return left&&right;
        

   } 
   int main() 
{


 
   return 0;
    }