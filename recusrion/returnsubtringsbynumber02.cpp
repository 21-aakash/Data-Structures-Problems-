#include <bits/stdc++.h>
using namespace std;
void keypad2(int m, string output)
{

   if (m == 0)
      cout << output << endl;

   string str[20] = {
       "",
       "",
       "abc ",
       " def",
       " ghi",
       " jkl",
       "mno ",
       " pqrs",
       "tuv ",
       " wxyz",
   };

   int x = m / 10;
   int y = m % 10;

   string given = str[y];
   int temp = given.size();

   for (int i = 0; i < temp; i++)
   {
      keypad2(x, given[i] + output);
      /* code */
   }
}

void keypad(int num)

{
   string output;

   keypad2(num, output);
}

int main()
{
   int n;
   cout << " Enter number  ";
   cin >> n;

   keypad(n);

   return 0;
}