#include <stdio.h>
#include <math.h>

double sine(double x);

int main()
 {
    double x, result;
    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);
    result = sine(x);
    printf("sin(%lf) = %lf\n", x, result);
    return 0;
}

double sine(double x)
 {
    double sum = 0.0;
    double term = x;
    int sign = 1;
    int n = 1;
    while (fabs(term) > 1e-8) 
	{  
        sum += term;
        sign = -sign;
        n += 2;
        term = sign * pow(x, n) / tgamma(n + 1);  
    }
    return sum;
}
