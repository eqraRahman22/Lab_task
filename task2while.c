#include <stdio.h>
#include <math.h>
int main(void)

{
    int n, i;
    double sum=0;
    printf("input a number: ");
    scanf("%d", &n);
    i=1;
    while(i<=n){
        sum = sum +  (1.0/(pow(i, 2)));
         i++;
    }
    printf("%lf", sum);

    return 0;

}
