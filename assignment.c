#include<stdio.h>

void my_func(){
    int a,b;
    long long int c;
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("%lld",c);

}

void div(){
    int a;
    scanf("%d",&a);
    if (a%3==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
}

void div2(){
    int n;
    scanf("%d",&n);
    for (int i=21; i<=n; i++){

        if (i%3==0 && i%7==0){
            printf("%d\n",i);
        }

    }

    


}

void shopping(){
    long long int n;
    scanf("%lld",&n);
    if (n>1000){
        printf("I will buy Punjabi\n");
        if(n>=1500){
            printf("I will buy new shoes\nAlisa will buy new shoes");

        }
    }
    else
    {
        printf("Bad luck!");
    }
    
}




int main(){
    /*my_func();*/
    /*div();*/
    /*div2();*/
    shopping();
    return 0;
}
