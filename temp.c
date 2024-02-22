#include<stdio.h>
int main()
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

    return 0;
}
