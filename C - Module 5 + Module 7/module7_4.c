#include<stdio.h>
int main(){
 
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++){
        int x;
        scanf("%d",&x);
        arr[i]=x;
    }
    int count=0;
    int c;
    scanf("%d",&c);
    for (int i=0; i<n; i++){
        if (arr[i]==c){
            printf("%d",i);
            count++;
            break;
            
        }
 
    }
    if (count==0){
        printf("%d",-1);
    }
 
    return 0;
}
