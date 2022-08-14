#include<stdio.h>
int even_f(int n);
int main(void)
{
    int a, even;
    printf("a= ");
    scanf("%d", &a);
    even = even_f(a);
    return 0;
}
int even_f(int n)
{
    int i;
    for(i=2; i<=n; i+=2){
        printf("%d ", i);
    }
    return 0;
}

