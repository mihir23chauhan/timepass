#include <stdio.h>
long long int solve(int n, long long int A[], long long int B[]);
long long int max(long long int a, long long int b);
 
// DO NOT EDIT the main function.
 
int main(void) {
  int T = 0, j;
  scanf("%d",&T);
  for(j = 0; j < T; j++){
      int n = 0, i; 
      
      scanf("%d",&n);
      
      long long int A[n];
      long long int B[n];
      
      for(i = 0; i < n; i++){
        scanf("%lld",&A[i]);
      }
      for(i = 0; i < n; i++){
        scanf("%lld",&B[i]);
      }
      
      printf("%lld\n",solve(n,A,B));
  }
  return 0;
}

// Figure out the logic for what should be returned here.
// You might need a helper max function, which has been 
// defined for you already below.
 
long long int solve(int n, long long int A[], long long int B[]){
  long long int moves = 0, mina = A[0], minb = B[0];
  int i;
  
  // Calculate the minimum values of arrays A and B
  // in the variables mina and minb
  for(int i=0; i<n; i++){
      if(A[i]<mina){
          mina=A[i];
      }
      if(B[i]<minb){
          minb=B[i];
      }
  }
  
  for(int i=0; i<n; i++){
      if((A[i]-mina)>(B[i]-minb)){
          moves+=A[i]-mina;
      }else{
          moves+=B[i]-minb;
      }
  }
  
  // Why do you need these values?

  // Now write the logic for computing the answer,
  // which is stored in the moves variable. 

  return moves;
}
 
long long int max(long long int a, long long int b){
  return a > b ? a : b;
}
