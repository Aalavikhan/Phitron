#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++){
        int x;
        arr[i]=scanf("%d",&x);
    }
    printf(arr);



    return 0;
}