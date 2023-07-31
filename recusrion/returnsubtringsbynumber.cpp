#include <bits/stdc++.h>
using namespace std;


int Substrings(int n, string out[10000])
{

    if (n == 0)
    {
        out[0] = "";
    }
 

    int count = Substrings(n / 10, out);

    int z = n % 10;
     string str[20]={"", "", "abc ", " def", " ghi", " jkl", "mno ", " pqrs", "tuv ", " wxyz",};
    string given = str[z];
    int temp = given.size();

    for (int j = 0; j < temp; j++)
    {
        

        for (int i = 0; i < count; i++)
        {
            out[count + i] = given[j] + out[i];
        }

      

    }


    return count*temp;
}

int main()
{
    int n;
    cout << " Enter number  ";
    cin >> n;
    string  output[10000];

    int count = Substrings(n, output);
    for (int i; i < count; i++)
    {
        cout << output[i] << endl;
    }

    return 0;
}