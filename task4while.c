#include <stdio.h>
int main(void)
{
    int n, i;
    float balance, rate, afee, sum=1;
    printf("Initial balance: ");
    scanf("%f", &balance);
    printf("IYearly interest rate: ");
    scanf("%f", &rate);
    printf("Annual fee: ");
    scanf("%f", &afee);
    printf("Enter the number of year: ");
    scanf("%d", &n);
    i=1;
    while(i<=n){
        balance =balance + balance*(rate/100)-500;
         i++;
    }

    printf("Balance arter %d year is %.2f", n, balance);
    return 0;
}

