#include <stdio.h>
#include <math.h>
int main(void)

{
    int n, i;
    double sum=0;
    printf("input a number: ");
    scanf("%d", &n);
    i=1;
    do{
        sum = sum +  (1.0/(pow(i, 2)));
         i++;
    }
    while(i<=n);
    printf("%lf", sum);

    return 0;

}
