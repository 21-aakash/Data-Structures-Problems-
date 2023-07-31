#include <bits/stdc++.h>
using namespace std;

class fraction
{
    int numerator;
    int denominator;

public:
    fraction(int n, int m)
    {
        numerator = n;
        denominator = m;
    }

    void simplify()
    {
        int factor = 1;

        int j = min(this->denominator, this->numerator);
        for (int i = 1; i <= j; i++)
        {
            if (this->numerator % i == 0 && this->denominator % i == 0)
                factor = i;
        }

        this->numerator = this->numerator / factor;
        this->denominator = this->denominator / factor;
    }
    void print()
    {
        cout << " Numerator : " << numerator << endl;

        cout << " Denominator  : " << denominator << endl;
    }
    /*
    void add(fraction f)
    {
        int lcm = this->denominator * f.denominator;

        int x = this->numerator * f.denominator;

        int y = this->denominator * f.numerator;

        this->numerator = x + y;
        this->denominator = lcm;
    }
    */
    fraction add(fraction const &f)
    {
        int lcm = this->denominator * f.denominator;

        int x = this->numerator * f.denominator;

        int y = this->denominator * f.numerator;

        int num = x + y;

        fraction fnew(num, lcm);
        fnew.simplify();

        return fnew;
    }
    fraction operator+(fraction const &f) // operator overloading
    {
        int lcm = this->denominator * f.denominator;

        int x = this->numerator * f.denominator;

        int y = this->denominator * f.numerator;

        int num = x + y;

        fraction fnew(num, lcm);
        fnew.simplify();

        return fnew;
    }

    fraction operator*(fraction &f)
    {
        int n = this->numerator * f.numerator;
        int m = this->denominator * f.denominator;

        fraction fnew(n, m);
        return fnew;
    }

    bool operator==(fraction const &f)
    {
        if( this->numerator != f.numerator)
        return false;
     else 
     return true;

    }
    //pre-increment

    fraction  & operator++( ) //return byb reference 
    {

  this->numerator =this->numerator+denominator ;
  
simplify();

return *this;

    }

    //post increment 

    fraction operator++(int )
    {
fraction fnew(numerator , denominator );
numerator =numerator +denominator ;
simplify();
fnew.simplify();

return fnew ;


    }

    //+= operator overloading 

    fraction & operator +=(fraction &f)
    {
        //code is same as add function ;

         int lcm = this->denominator * f.denominator;

        int x = this->numerator * f.denominator;

        int y = this->denominator * f.numerator;

        int num = x + y;

       numerator = x+y;
       denominator = lcm;

        simplify();
return *this;


    }
};

int main()
{
    /* fraction f(7, 2);
     f.print();
     fraction f2(3, 4);
     f2.print();

     f.add(f2);
     f.print();

     f.simplify();

     f.print();
 */

    fraction f1(2, 3), f2(8, 6);

   /* f1.print();
    f2.simplify();

    f2.print();

    fraction f = f1.add(f2);

    f.print();

    fraction f5 = f1 + f2; // operator overloading

    f5.print();

    fraction f6 = f1 * f5;
   f6.print();

    bool x= f1==f2;
    cout<<x;
    

 fraction f7=++f1; 
f7.print ();

f1.print();

++(++f7); 

f7.print();

fraction f8= f7++;
f8.print();
f7.print();

*/

(f1+=f2)+=f2;

f1.print();


    return 0;
}