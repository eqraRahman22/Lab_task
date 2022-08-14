#include <stdio.h>
int main(void)
{
    int n, i, sum=1;
    printf("Input the number: ");
    scanf("%d", &n);
    i=1;
    do{
        if(n==0){
            sum=1;
        }
        else
        sum = sum*i;
        i++;
    }
    while(i<=n);
    printf("%d", sum);

    return 0;

}



