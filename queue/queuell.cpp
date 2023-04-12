#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Node
{
public:
    T data;
    Node<T> *next;

    Node(T x)
    {
        data = x;
        next = NULL;
    }
};
template <typename T>
class qll
{
    Node<T> *head;
    Node<T> *tail;
    int size;

public:
    qll()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }
    bool isempty()
    {
        return size == 0;
    }
    int getsize()
    {
        return size;
    }

    T front()
    {
        if (isempty())
        {
            return 0;
        }
        return head->data;
    }
    void insertll(T elem)
    {
        Node<T> *newnode = new Node<T>(elem);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        tail->next = newnode;
        tail = newnode;
        size++;
    }
    T deletell()
    {
        if (isempty())
        {
            return 0;
        }
        T ans = head->data;
        Node<T> *temp = head;
        head = head->next; // move first

        delete temp;
        --size;
        return ans;
    }
};
int main()
{
    qll<int> temp;
    temp.insertll(10);
    temp.insertll(20);
    temp.insertll(30);
    temp.insertll(40);
    temp.insertll(50);
    temp.insertll(60);
    cout<<temp.front()<<endl;
    cout<<temp.deletell()<<endl;
    cout<<temp.deletell()<<endl;
    cout<<temp.deletell()<<endl;

cout<<temp.getsize()<<endl;
cout<<temp.isempty();

   
}