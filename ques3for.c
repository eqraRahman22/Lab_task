#include<stdio.h>
int fact(int n);
int main(void)
{
    int a;
    printf("a= ");
    scanf("%d", &a);
    int factorial = fact(a);
    printf("Sample return value for input argument %d: \n", a);
    printf("%d", factorial);
    return 0;
}
int fact(int n)
{
    int i, fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }

    return fact;
}

