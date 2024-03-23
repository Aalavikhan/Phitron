#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int arr[x];
    for(int i=0; i<x; i++){
        int a;
        scanf("%d", &a);
        arr[i]=a;
    }
 
    for(int i=0; i<x ; i++){
        if (arr[i]<0){
            arr[i]=2;
        }
 
        else if(arr[i]>0){
            arr[i]=1;
        }
 
        printf("%d ",arr[i]);
        
    }
    
 
    return 0;
}
