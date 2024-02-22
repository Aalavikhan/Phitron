#include<stdio.h>
void myfunc(){
    int n;
    int x=-1;
    scanf("%d",&n);
    if (n==0 || n==1)
    {
            printf("%d",x);   
    }

    for (int i = 2; i <= n; i=i+2)
    {    
        printf("%d\n",i); 
    }
    
}

void eopn()
{
    int loop;
    int eve=0;
    int odd=0;
    int pos=0;
    int neg=0;
    scanf("%d",&loop);
    int x;
    for (int i=0; i<loop; i++)
    {
        scanf("%d",&x);
        if (x<0)
        {
            neg++;
        }
        if (x>0)
        {
            pos++;
        } 
        if (x%2==0)
        {
            eve++;
        }
        if (x%2!=0)
        {
            odd++;
        }
    }
    printf("Even:%d\nOdd:%d\nPositive:%d\nNegative:%d", eve,odd,pos,neg);
}

void pass()
{
    int a;
    while (scanf("%d",&a)!=EOF)
    {
        if (a==1999)
        {
            printf("Correct");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    
}

void max()
{   
    int loop;
    int x;
    int max=0;
    scanf("%d",&loop);
    for (int i=0; i<loop; i++)
    {
        scanf("%d",&x);
        if (x>max)
        {
            max=x;
        }

    }
    printf("%d",max);

}

void multiplication()
{
    int x;
    scanf("%d",&x);
    for (int i=1; i<=12; i++)
    {   
        int prod=i*x;
        printf("%d * %d = %d\n",x,i,prod);
    }
}

void num()
{  
    int loop1;
    scanf("%d",&loop1);
    for (int i=0; i<loop1; i++)
    {
        int x;
        scanf("%d",&x);
        int z;
        while (x!=0)
        {
            z=x%10;
            x=x/10;
            printf("%d ",z);
        }
        printf("\n");
    }




}
int main(){
    // eopn();
    // pass();
    // max();
    // multiplication();
    num();
    return 0;
}



