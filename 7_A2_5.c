#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x;
    scanf("%d", &x);
    int arr[x];
    for(int i=0; i<x; i++){
        int bald;
        scanf("%d",&bald);
        arr[i]=bald;
    }
        
    for(int j=x-1; j>=0; j-- ){
        if (j%2==0){
            printf("%d ",arr[j]);
        }
    }
        
    return 0;
}
