#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int k=0; k<n; k++){
        cin>>arr[k];
    }
    sort(arr,arr+n);
    int score=0;
    int i=0;
    int max;
    int min=arr[0];
    while (arr[n]-arr[i]>4){
        min=arr[i];
        for(int j=i+1; j<n; j++ ){
            max=arr[j];
            if(max-min>4){
                score+=1;
                i=j;
                break;
            }
        }
    }

    cout<<score+1;
    

}
