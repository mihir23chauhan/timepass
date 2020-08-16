#include <stdio.h>
#include <stdlib.h>
#include<string.h>


void find_moves(int p, int q){
    float ratio=p/q;
    int power_num=1;
    int power=0;
    while(power_num<q){
        power_num*=2;
        power+=1;
    }
    power=power-1;
    const char* ans[2*power];
    const char* L="L";
    const char* E="E";
    const char* F="F";
    int i=0;
    while(1){
        if(ratio>0.5){
            ans[i]=L;
            ans[i+1]=F;
            i=i+2;
            ratio=(2*ratio)-1;
        }else if(ratio<0.5){
            ans[i]=L;
            ans[i+1]=E;
            i=i+2;
            ratio=2*ratio;
        }else{
            ans[i]=L;
            ans[i+1]=F;
            i=i+2;
            break;
        }
    }
    for(int k=(2*power)-1; k>=0; k--){
        printf("%s",ans[k]);
    }
    

}

// Don't modify the code below
int main(){
    int P,Q;
    scanf("%d %d", &P, &Q);
    find_moves(P,Q);
    return 0;
}
