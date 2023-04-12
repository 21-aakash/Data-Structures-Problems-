#include <bits/stdc++.h>
#include "linkedlist.cpp"
using namespace std;

void print(Node *head)
{
    //  Node *temp = head; // temprory variable  so that head 's value doesnt lost

    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->ptr;
    }
}
Node *input()
{
    int data;
    cout << " enter the node: ";

    cin >> data; // takes first data

    Node *head = NULL; // to store address of first node

    while (data != -1) // input termination
    {
        Node *newnode = new Node(data); // dynamic node creation

        if (head == NULL) // for fist node
        {
            head = newnode;
        }

        else // baaki nodes k liye
        {

            Node *temp = head; // temprory pointyer for traversal
            // most imp part
            while (temp->ptr != NULL)
            {
                temp = temp->ptr; // skiping nodes and moving to next
            }

            temp->ptr = newnode; // if you found null , coonect the new node
        }

        cin >> data; // again takes next data
    }
    return head;
}
int main()
{

    Node *head = input();
    print(head);

    return 0;
}