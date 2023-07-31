#include <bits/stdc++.h>
using namespace std;

class dynamic
{

    int *data;
    int pos;
    int size;

public:
    dynamic()
    {
        data = new int[6];
        pos = 0;
        size = 6;
    }
    dyanamic(dynamic const & d)
    {
        // this->data = d.data;//shallow copy

        this->data = new int[d.size];
        for (int i = 0; i < d.pos; i++)
        {               //DEEP COPY 
            this->data[i] = d.data[i];
        }

        this->size = d.size;
        this->pos = d.pos;
    }
    //operartor overloading function
void operator =(dynamic const & d)
    {
        // this->data = d.data;//shallow copy

        this->data = new int[d.size];
        for (int i = 0; i < d.pos; i++)
        {               //DEEP COPY 
            this->data[i] = d.data[i];
        }

        this->size = d.size;
        this->pos = d.pos;
    }

    void add(int a)
    {
        if (pos == size)
        {
            int *newdata = new int[2 * size];
            for (int i = 0; i < size; i++)
            {
                newdata[i] = data[i];
            }
            delete[] data;

            data = newdata;

            size *= 2;
        }
        data[pos] = a;
        pos++;
    }
    void add(int i, int element)
    {

        if (i < pos)
            data[i] = element;
        else if (i == pos)
            add(element);
        else
            return;
    }

    int const get(int n)
    {
        if (n < pos)
            return data[n];
        else
            return -1;
    }
    void const print()
    {
        for (int i = 0; i < pos; i++)
        {
            cout << data[i] << " ";
        }
    }
};

int main()
{
    dynamic D;
    D.add(1);

    D.add(2);
    D.add(3);
    D.add(4);
    D.add(5);
    D.add(6);
    D.add(7);

    D.add(7, 20);
    cout << D.get(7);

    cout << D.get(6);

    D.print();
    dynamic D2(D);
    D2.add(8,100);

    D2.print();


    return 0;
}