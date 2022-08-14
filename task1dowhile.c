#include <stdio.h>
int main(void)

{
    int n, i, a, sum=0;
    printf("How many number want to input: ");
    scanf("%d", &n);

    i=1;
    do{
        printf("Number %d: ", i);
        scanf("%d", &a);
        sum = sum + a;
        i++;
    }
    while(i<=n);

    printf("%d", sum);

    return 0;

}

