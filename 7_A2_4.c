#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x;
    scanf("%d",&x);
    int arr[x];
    for (int i=0; i<x; i++){
        int r;
        scanf("%d",&r);
        arr[i]=r;
    }
    int mayere,dhor;
    scanf("%d %d", &mayere, &dhor);
    arr[mayere]=dhor;
    for (int j=x-1; j>=0; j--){
        printf("%d ",arr[j]);
    }
    return 0;
}
