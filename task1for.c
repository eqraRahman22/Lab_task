#include <stdio.h>
int main(void)

{
    int n, i, a, sum=0;
    printf("How many number want to input: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        printf("Number %d: ", i);
        scanf("%d", &a);
        sum = sum + a;
    }
    printf("%d", sum);

    return 0;

}

