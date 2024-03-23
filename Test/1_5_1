#include<stdio.h>

void multiples()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a%b==0 || b%a==0)
    {
        printf("Multiples");
    }
    else
    {
        printf("No Multiples");
    }
}

void character()
{
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
}
void digitornot()
{
    char x;
    scanf("%c",&x);
    if( x>='0' && x<='9')
    {
        printf("IS DIGIT");
    }
    else
    {   
        printf("ALPHA\n");
        if (x>='a' && x<='z')
        {
            printf("IS SMALL");
        }
        else
        {
            printf("IS CAPITAL");
        }
    }
    
}


int main(){
    digitornot();
    multiples();
    character();
    return 0;
}
