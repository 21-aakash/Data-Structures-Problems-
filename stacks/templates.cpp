#include <bits/stdc++.h>
using namespace std;

template <typename T, typename V >
class Pair
{
    T x;
    V y;

public:
    void setx(T a)
    {
        x = a;
    }
    void sety(V a)
    {
        y = a;
    }
    T getx()
    {
        return x;
    }
        V gety()
    {
        return y;
    }
};



int main()
{

    Pair<int, int > p;
    p.setx(12);
    p.sety(20);
    cout << p.getx() << endl;
    cout << p.gety();

    Pair < Pair <int, int  >, int > p1;

    Pair <int, int >q;

    q.setx(100);
    q.sety(200);
    q.getx();
    q.gety();

    p1.setx(q);
    p1.sety(500);

    p1.getx().getx();

    p1.gety();


    


    return 0;
}