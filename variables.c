#include <stdio.h>

// declaración de variables

// extern se utiliza para declarar una variable que se va a utilizar en otro archivo fuente.
extern int a, b, c;
float f, g, h;


int main() {
    int a, b, c;
    a = 10;
    b = 35;
    c = a + b;
    printf("Suma: %d\n", c);
    f = -10;
    g = -21;
    h = f + g;
    printf("Suma flotante: %f", h);
    return 0;
}