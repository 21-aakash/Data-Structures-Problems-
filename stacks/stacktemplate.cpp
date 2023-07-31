   #include<bits/stdc++.h>
   #include<climits>
   using  namespace std ; 
  
  template<typename T> //

  //dynamic stack 
  class stackdata
  {
     T * data;     //
     int capacity;
     int nextindex;

public: 

     stackdata()
     {
      capacity=4;

            data = new T[capacity]; //
           
            nextindex=0;
     }

     int size()
     {
        return nextindex;

     }

     bool isempty()
     {
               return nextindex==0;
     }

void push(T element)       //
{
      if(nextindex==capacity)
      {
        T *newdata=new T [2*capacity];    //

for(int i=0; i<capacity; i++)
{
  data[i]=newdata[i];

}
capacity*=2;
delete[] data;
data=newdata;


      }

      data[nextindex]=element;
      nextindex++;

}

T pop() //
{
    if(isempty())
    {
        cout<<" Stack is empty!: "<<endl;
        return 0 ;  //
    }

nextindex--;
return data[nextindex];



}

T top()  //
{
    if(isempty())
    {
        cout<<" Stack is empty!: "<<endl;
      return 0 ;  //
    }
    return data[nextindex-1];

}

  };

  
  
  
  
  
   int main() 
{
 stackdata  <int> aakash;

aakash.push(12);
aakash.push(13);
aakash.push(14);
aakash.push(15);
aakash.push(16);
aakash.push(17);

 cout<<aakash.top();


   return 0;
    }