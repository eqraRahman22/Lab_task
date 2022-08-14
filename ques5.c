#include <stdio.h>
#include <math.h>
int power(int a, int b);
int main (void)
{
    int x, y, answer;
    scanf("%d %d", &x, &y);
    printf("Sample return value for input argument %d.0 and %d.0: \n", x, y);
    answer = power(x, y);
    printf("%d.0", answer);
    return 0;
}

int power(int a, int b)
{
    return pow(a,b);
}
