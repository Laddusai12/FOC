#include <stdio.h>

int main()
{
    int i, n;
    float x, sum = 1, term = 1;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        term = term * (-x / i);
        sum = sum + term;
    }

    printf("e^(-%.2f) = %.4f", x, sum);

    return 0;
}
