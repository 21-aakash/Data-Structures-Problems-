#include <bits/stdc++.h>
#include "linkedlist.cpp"
using namespace std;

void insert_recursion()
{



}

Node *deletel(Node *head, int i) // delete fn
{

     if (head == NULL)
    {
        return head;
    }


/*
int count=0;
  Node *temp = head;

  while (temp != NULL && count < pos - 1) {

    temp = temp->next;
count++;

  }

  if (temp != NULL && temp->next != NULL) {

    Node *a = temp->next;
    temp->next = a->next;
delete a;

  }




*/
    int j = 1;

    Node *temp = head;

    if (i == 0)
    {

        head = head->ptr;
        delete temp;

        return head;
    }

    while (j < i)
    {
        temp = temp->ptr;

        j++;
    }
    if (i == j)
    {
        Node *x = temp->ptr;
        temp->ptr = x->ptr;
        delete x;
    }
    return head;
}
Node *insertlist() // insertion  fn
{
    int data;
    cin >> data;

    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newnode = new Node(data);

        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }

        else
        {

            tail->ptr = newnode;
            tail = newnode;
        }

        cin >> data;
    }
    return head;
}
Node *insert_node(Node *head, int data, int i) // insertion node  fn
{
    Node *newnode = new Node(data);

    int j = 1;

    Node *temp = head;

    if (i == 0)
    {
        newnode->ptr = head;
        head = newnode;
        return head;
    }
    while (temp != NULL && j < i)
    {
        temp = temp->ptr;
        j++;
    }

    if (i == j)
    {
        newnode->ptr = temp->ptr;
        temp->ptr = newnode;
        temp = newnode;
    }
    return head;
}
void print(Node *head) // print list
{
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->ptr;
    }
}
int main()
{
    int data, pos, p;

    Node *head = insertlist();

    print(head);

    cout << " Enter node data: ";
    cin >> data;
    cout << " Enter position : ";
    cin >> pos;

    head = insert_node(head, data, pos);
    print(head);

    cout << " enter pos to delete : ";
    cin >> p;

    deletel(head, p);
    print(head);

    return 0;
}