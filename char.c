#include<stdio.h>
int main(){
    char x;
    scanf("%c",&x);
    if (x>=97 && x<=122)
    {
        int a=x-32;
        printf("%c",a);
    }
    else
    {
        int a=x+32;
        printf("%c",a);
    }
    return 0;
}

