#include <stdio.h>
#include <math.h>
int main(void)

{
    int n, i;
    double sum=0;
    printf("input a number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        sum = sum +  (1.0/(pow(i, 2)));
    }
    printf("%lf", sum);

    return 0;

}
