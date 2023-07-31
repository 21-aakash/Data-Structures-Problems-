#include <bits/stdc++.h>
#include <climits>
using namespace std;

// dynamic stack
class stackdata
{
  int *data;
  int capacity;
  int nextindex;

public:
  stackdata()
  {
    capacity = 4;

    data = new int[capacity];

    nextindex = 0;
  }

  int size()
  {
    return nextindex;
  }

  bool isempty()
  {
    return nextindex == 0;
  }

  void push(int element)
  {
    if (nextindex == capacity)
    {
      int *newdata = new int[2 * capacity];

      for (int i = 0; i < capacity; i++)
      {
        data[i] = newdata[i];
      }
      capacity *= 2;
      delete[] data;
      data = newdata;
    }

    data[nextindex] = element;
    nextindex++;
  }

  int pop()
  {
    if (isempty())
    {
      cout << " Stack is empty!: " << endl;
      return INT_MIN;
    }

    nextindex--;
    return data[nextindex];
  }

  int top()
  {
    if (isempty())
    {
      cout << " Stack is empty!: " << endl;
      return INT_MIN;
    }
    return data[nextindex - 1];
  }
};
