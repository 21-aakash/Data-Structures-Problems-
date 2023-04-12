#include <bits/stdc++.h>
using namespace std;

template <typename T>

class queuearray

{
    T *data;
    int ni;
    int fi;
    int size;
    int capacity;

public:
    queuearray(int s)
    {
        capacity = s;

        data = new T[s];
        size = 0;
        ni = 0;
        fi = -1;
    }

    void enqueue(T elem)
    {
        if (ni == capacity)
        {
            T *newData = new T[2 * capacity];

            int j = 0;
            for (int i = fi; i < capacity; i++)
            {
                newData[j] = data[i];
            }
            for (int i = 0; i < fi; i++)
            {
                newData[j] = data[i];
            }
            fi = 0;
            delete [] data;
            data = newData;
            ni = capacity;
            capacity *= 2;
        }

        data[ni] = elem;
        ni = (ni + 1) % capacity;

        if (fi == -1)
        {
            fi = 0;
        }

        size++;
    }
    T dequeue()
    {
        if (size == 0)
        {
            return -1;
        }
        T ans = data[fi];
        fi = (fi + 1) % capacity;

        --size;
        if (size == 0)
        {
            fi = -1;
            ni = 0;
        }
        return ans;
    }
    T front()
    {
        if (isempty())
        {
            cout << " queue is empty";
        }
        return data[fi];
    }
    int getsize()
    {
        return size;
    }
    bool isempty()
    {
        return size == 0;
    }
};
int main()
{
    queuearray<int> q(2);

    q.enqueue(10);
    q.enqueue(20);
    cout<<q.getsize()<<endl;

    
    q.enqueue(30);
     q.enqueue(40);
   cout<< q.dequeue()<<endl;


    cout << q.front() << endl;
    cout<<q.getsize()<<endl;

    
    return 0;
}