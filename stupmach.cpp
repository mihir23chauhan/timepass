#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        ll arr_sum=0;
        for(ll i=0; i<n; i++){
            cin>>arr[i];
            arr_sum+=arr[i];
        }
        ll extra_sum=0;
        ll min=*min_element(arr,arr+n);
        for(ll i=0; i<n; i++){
            if(arr[i]==min){
                break;
            }else{
                extra_sum+=1;
            }
        }
        ll total= (min*n) + extra_sum;
        cout<<total<<"\n";

    }


    
}