#include<iostream>
using namespace std;

int my_fun(){
    long int n;
    cin>>n;
    unsigned long int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    unsigned long int sum=0;
    for(int j=0; j<n; j++){
        if(sum<arr[j]+arr[(j-1+n)%n]+arr[(j+1)%n]){
            sum=arr[j]+arr[(j-1+n)%n]+arr[(j+1)%n];
        }
    }
    return sum;
}

int main(){
    int t;
    cin>>t;
    for(int k=0; k<t; k++){
        cout<<my_fun();
    }
}