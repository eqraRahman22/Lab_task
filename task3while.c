#include <stdio.h>
int main(void)

{
    int n, i, sum=1;
    printf("Input the number: ");
    scanf("%d", &n);
    i=1;
    while(i<=n){
        if(n==0){
            sum=1;
        }
        else
        sum = sum*i;
        i++;
    }
    printf("%d", sum);

    return 0;

}


