#include <bits/stdc++.h>
#include "linkedlist.cpp"

using namespace std;

void print (Node *head)
{
    while (head!=NULL)
    {
    cout<<head->data<<" ";
    head=head->ptr;
    }
}
Node *input_better()
{

    int data;
    cout<<" enter th node: ";
    
    cin >> data;

    Node *head = NULL;

    Node *tail = NULL;

while(data!=-1)
{

     Node *newnode=new Node(data);

     if(head==NULL)
     {
        head=newnode;
        tail =newnode;

     }
     else{
    tail->ptr=newnode;
    tail=newnode;


     }

    cin>>data;

}
return head;

}
int main()
{

Node *head= input_better();
print(head);

    return 0;
}