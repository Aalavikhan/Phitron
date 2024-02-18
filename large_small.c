#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int max=-100000;
    if (a>=max)
    {
        max=a;
    }
    if (b>=max)
    {
        max=b;
    }
    if (c>=max)
    {
        max=c;
    }
    int min=100000;
    if (a<=min)
    {
        min=a;
    }
    if (b<=min)
    {
        min=b;
    }
    if (c<=min)
    {
        min=c;
    }

    printf("%d %d",min,max);

    return 0;
}

