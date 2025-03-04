#include <stdio.h>
#include <math.h>

int x;
float result;

int main() {
    printf("Ingrese el valor de x:");
    scanf("%d", &x);
    result = sin(x);
    printf("El seno de x es: %f\n", result);
    printf("El valor de x es: %d\n", x);
    return 0;
}