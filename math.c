#include <stdio.h>
#include <math.h>

int main() {
    double x = 4.5;
    double y = 2.0;

    
    printf("Square root of %.2f is %.2f\n", x, sqrt(x));

 
    printf("%.2f raised to the power of %.2f is %.2f\n", x, y, pow(x, y));

    
    printf("Ceiling of %.2f is %.2f\n", x, ceil(x));

    
    printf("Floor of %.2f is %.2f\n", x, floor(x));

    printf("Absolute value of -%.2f is %.2f\n", x, fabs(-x));

    return 0;
}
