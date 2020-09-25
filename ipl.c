 #include <stdio.h>
#include <math.h>

int isHeap(int arr[], int N){
  //Write your logic here. 
    for(int i=0; i<=(N-2)/2; i++){
        if(arr[2*i+1]>arr[i]){
            return 0;
        }
        if(2*i+2 <N && arr[2*i +1]>arr[i]){
            return 0;
        }
    }
  return 1;
}

void heapify(int arr[], int n, int i){
    int large = i; // index of a node
    int l=2*i +1; // index of left child
    int r = 2*i +2; // index of right child of node
    if(isHeap(arr,n) == 0){
        if(l<n && arr[large]<arr[l]){
            large =l;
        }
        if(r<n && arr[r]> arr[large]){
            large =r;
        }
        if(large != i){
            // swap node with its larger child
            int temp = arr[large];
            arr[large] = arr[i];
            arr[i] = temp;

            // go on recursion
            heapify(arr,n, large);
        }
    }
    

}



void buid_heap(int arr[], int n){
    for(int i= (n-2)/2; i>=0; i--){
      heapify(arr, n, i);
    }
}

int main(){
    int n,m;
    scanf("%d %d",&n, &m);
    int arr[n];
    
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int ans=0;
    for(int k=0; k<m; k++){
        buid_heap(arr,n);
        ans+=arr[0];
        arr[0]=arr[0]-1;
    }
    printf("%d\n",ans);
    
}
