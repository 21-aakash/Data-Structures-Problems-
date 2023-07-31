#include <iostream>
using namespace std;
int main()
{
    int i = 65;

    char *pc =(char*) &i;
    cout << *(pc);
    cout << *(pc + 1);
    cout<<endl;
    cout << pc;

    return 0;
}