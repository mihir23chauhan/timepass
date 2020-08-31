#include<stdio.h>
void fun(int n,long long int arr[]){
    long long int fibo[n];
    long long int fact=1;
    fibo[0]=0;
    fibo[1]=1;
    for(long int i=2; i<n; i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    arr[0]=0;// first element of c = o ==> fibo(0)
    arr[1]=1;// secound element factorial(0)=1;
    long int i=1; // fibo tracker 
    long int j=1; // fact treacker
    for(long int k=2;k<n; k++){
        if(j*fact>fibo[i]){
            arr[k]=fibo[i];
            i+=1;
        }else if(j*fact< fibo[i]){
            arr[k]=j*fact;
            fact=j*fact;
            j+=1;
        }else {
            arr[k]=fibo[i];
            i+=1;
            k+=1;
            arr[k]=j*fact;
            fact=j*fact;
            j+=1;
        }
    }
}

/* Function to print an array */
void printArray(long long int arr[], long int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		printf("%lld ", arr[i]); 
	printf("\n"); 
} 

int main(){
    long long int C[41];
    fun(41,C);
    printArray(C,41);
    int a=C[40]%12;
    printf("%d",a);

}