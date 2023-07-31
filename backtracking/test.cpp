   #include<bits/stdc++.h>
   using  namespace std ; 
   int main() 
{
 
vector<vector<int>>ans (4, vector<int> ( 4, 0) );


for( int i=0 ; i<ans.size() ; i++ )
{
    for( int j=0 ; j<ans[i].size() ; j++ )
    {
        cout<<ans[i][j]<<" ";


    }
    cout<<endl;
}

   return 0;
    }