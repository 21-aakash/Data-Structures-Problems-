#include <bits/stdc++.h>
#include "linkedlist.cpp"
using namespace std;

// dynamic implementation

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->ptr;
    }
}
int main()
{
    Node *n1 = new Node(100);
    Node *n2 = new Node(200);
    Node *n3 = new Node(300);
    Node *n4 = new Node(400);
    Node *n5 = new Node(500);
    Node *head = n1;

    n1->ptr = n2;

    n2->ptr = n3;
    n3->ptr = n4;
    n4->ptr = n5;

    print(head);

    return 0;
}