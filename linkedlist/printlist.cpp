   #include<bits/stdc++.h>
   #include"linkedlist.cpp"
   using  namespace std ; 


 void print(Node *head)
    {
    //  Node *temp = head; // temprory variable  so that head 's value doesnt lost

        while(head!=NULL)
    {
    cout<<head->data<<endl;
    head=head->ptr;

    }
    }
    
   int main() 
{
 
  Node n1(10);
  Node *Head =&n1;

  Node n2(20);
  Node n3(30);
  Node n4(40);
  Node n5(50);
 n1.ptr=&n2;

  n2.ptr=&n3;
  n3.ptr=&n4;
 n4.ptr=&n5;

  print(Head);

cout<<Head->data;

   return 0;
    }

    