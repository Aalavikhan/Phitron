#include<stdio.h>
int main()
{   
    double b;
    long long int a;
    scanf("%lld", &a);
    printf("long int---> %lld \n",a);
    printf("int--->%d \n",a);
    scanf("%lf",&b);
    printf("double--->%lf \n",b);
    printf("regular float--->%f \n",b);
    return 0;
}