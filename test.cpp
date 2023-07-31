int subset(int input[], int n, int output[][20]) {
  // Write your code here

  if (n == 0) {
    output[0][0] =0;
    return 1;
  }

 

  int count=subset(input+1, n-1, output);
int x=2*count;


  for(int i=0; i<count ;i++)
  {
       
     output[i+count][0]=output[i][0]+1;
     
     output[i+count][1]=input[0];

     for (int j = 1; j < output[count][0]; j++) {
       output[i + count][j + 2] = output[i][j ];
     }
  }

return x;

  
}
