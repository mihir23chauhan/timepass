#include<iostream>
int n;
using namespace std;
int num(unsigned long long int a,unsigned long long int b, int i){
    if(i==n){
        return a;
    }else{
        return num(b,a+(b*b),i+1);
    }
}
int main(){
    unsigned long long int a,b;
    cin>>a>>b>>n;
    cout<<num(a,b,1);
}