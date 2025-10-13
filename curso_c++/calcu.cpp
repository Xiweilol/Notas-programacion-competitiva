#include <stdio.h>
#include <math.h>

int main(void){
    int a = 1, b = -3, c = 2;
    float x1,x2;
    int dentro = pow(b,2) - 4 * a * c;
    x1 = (-b + pow(dentro,0.5)) / (2 * a);
    x2 = (-b - pow(dentro,0.5)) / (2 * a);

    printf("x1 = %.2f\n", x1);
    printf("x2 = %.2f\n", x2);

    return 0;
}