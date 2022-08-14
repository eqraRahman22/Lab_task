
#include<stdio.h>
void even_f(int n);
int main(void)
{
    int a, even;
    printf("a= ");
    scanf("%d", &a);
    printf("Even numbers between 1 and %d are: ", a );
    even_f(a);
    return 0;
}
void even_f(int n)
{
    int i=2;
    while(i<=n){
        printf("%d ", i);
        i+=2;
    }
}
