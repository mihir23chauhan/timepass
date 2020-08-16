#include <stdio.h>
#include <stdlib.h>
#include<string.h>


void find_moves(int p, int q){
    float ratio=p/q;
    char ans[]="";
    char L="L";
    char E="E";
    char F="F";
    while(1){
        if(ratio>0.5){
        
            strncat(ans, &L, 1);
            strncat(ans, &F, 1);
             
            ratio=(2*ratio)-1;
        }else if(ratio<0.5){
            
            strncat(ans, &L, 1);
            strncat(ans, &E, 1);
            ratio=2*ratio;
        }else{
            
            strncat(ans, &L, 1);
            strncat(ans, &F, 1);
            break;
        }
    }
    strrev(ans);
    printf("%s\n",ans);
    

}

// Don't modify the code below
int main(){
    int P,Q;
    scanf("%d %d", &P, &Q);
    find_moves(P,Q);
    return 0;
}