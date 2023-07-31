   #include<bits/stdc++.h>
   using  namespace std ; 
   
   int Substring(string input, string output[])

   {
       //   if(s.size () == 0)
         // return 0;


if(input.empty())
{
    output[0]=" ";
    return 1;
}

int smalloutput= Substring(input.substr(1), output);
for(int i=0; i<smalloutput; i++){

    output[i+smalloutput]=input[0]+output[i];

}
return smalloutput*2;


   }
   int main() 
{
 string o[1000],  s;

 cout<<"Enter your string : ";
 cin>>s;

 int count = Substring(s, o);

 for(int i=0; i<count; i++)
    {
        cout<<o[i]<<endl;
        
    }


   return 0;
    }

   