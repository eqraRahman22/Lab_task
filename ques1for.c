#include <stdio.h>
//series
void series(int a);
int main(void)
{
    int n, output;
    printf("n= ");
    scanf("%d", &n);
    series(n);

    return 0;
}

void series(int a)
{
    int i;
    for(i=1; i<=a; i++){
        printf("[%d] ", i);
    }
}
