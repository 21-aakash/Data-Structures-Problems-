#include <string>
using namespace std;

int keypad(int num, string output[]){
    if(num==0){
        output[0]="";
        return 1;
    }
    string s[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    int dig=num%10;
    int smol = keypad(num/10,output);
    
    int digsize=s[dig].size();
    
    string ar[10000];
    int k=0;
    for(int i=0;i<digsize;i++){
        for(int j=0;j<smol;j++){
            ar[k]=output[j]+s[dig][i];
            k++;
        }
    }
    for(int i=0;i<k;i++){
        output[i]=ar[i];
    }
    return smol*digsize;
}