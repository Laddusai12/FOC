#include <stdio.h>
#include <math.h>

int main() {
    double x, term, sum;
    int i, sign, fact;

    printf("Enter the value of x in degrees: ");
    scanf("%lf", &x);

    x = x * M_PI / 180.0;

    term = 1.0;
    sum = term; 
    sign = -1; 
    fact = 2;
    for (i = 1; i < 10; i++) {
        term = term * x * x / (fact * (fact - 1));
        sum = sum + sign * term;
        sign = -sign;
        fact = fact + 2;
    }

    printf("cos(%.2lf) = %.4lf\n", x, sum);
    return 0;
}
