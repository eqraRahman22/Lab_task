#include <stdio.h>
int main(void)

{
    int n, i, a, sum=0;
    printf("How many number want to input: ");
    scanf("%d", &n);

    i=1;
    while(i<=n){
        printf("Number %d: ", i);
        scanf("%d", &a);
        sum = sum + a;
        i++;
    }

    printf("%d", sum);

    return 0;

}


