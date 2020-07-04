#include<iostream>
#define long long int;
using namespace std;


int main(){
    int t;
    cin>>t;
    int k, d0, d1;
    for(int l=0; l<t; l++){
        cin>>k>>d0>>d1;
        int s=d0+d1;
        int block_sum=(((2*s)%10))+(((4*s)%10))+(((6*s)%10))+(((8*s)%10));
        int num_block_repeat=(k-3)/4;
        int num_remaining = (k-3) - num_block_repeat;
        int remaing=0;
        for (int i=1; i<=num_remaining; i++){
            int num=((2^i)%10);
            remaing+=num;    
        }
        int sum=s+(s%10)+(block_sum*num_block_repeat)+remaing;
        if(sum%3==0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}