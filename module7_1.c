#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int arr[x];
    int store[]={100000,0};
    for (int i=1; i<=x; i++){
        int k;
        scanf("%d",&k);
        arr[i]=k;
        if (k<store[0]){
            store[0]=k;
            store[1]=i;
        }
    }
    printf("%d %d",store[0],store[1]);
    
    
    return 0;
}