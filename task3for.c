#include <stdio.h>
int main(void)

{
    int n, i, sum=1;
    printf("Input the number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        if(n==0){
            sum=1;
        }
        else
        sum = sum*i;
    }
    printf("%d", sum);

    return 0;

}

