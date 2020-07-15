#include<iostream>
#include <queue>
using namespace std;
#define ll long long

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int N;
        ll Z;
        int h=0;
        int count=0;
        cin>>N>>Z;
        priority_queue <int> que;
        for(int i=0; i<N; i++){
            int a;
            cin>>a;
            que.push(a);
        }
        while(Z>0){
            if(que.top()==0){
                h=1;
                break;
            }else{
                Z-=que.top();
                que.push(que.top()/2);
                que.pop();
                count++;
            }
        }
        if(h==0){
            cout<<count<<"\n";
        }else{
            cout<<"Evacuate"<<"\n";
        }
    }
}