#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int sumev=0;
    int sumod=0;
    int k;
    scanf("%d",&k);
    for (int i=0; i<k; i++){
        int num;
        scanf("%d",&num);
        if (num%2==0){
            sumev=sumev+num;
        }
        else{
            sumod=sumod+num;
        }
    }
    printf("%d %d", sumev,sumod);
    return 0;
}
