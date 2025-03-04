#include <stdio.h>

int power(int base, int n);

int main () {
    // int i;
    // for (i = 0; i < 10; i++) {
    //     printf("el resultado es: %d\n", power(2, i));
    // }
    int n = 3;
    printf("el resultado es: %d\n", power(2, n));
    printf("el valor original de n sigue siendo: %d\n", n);
    return 0;
}

// al pasar como argumento C crea una copia temporal de la variable, a esto se le llama "paso por valor" o "call by value"
int power(int base, int n) {
    int p;
    for (p = 1; n > 0; n--) {
        p = p * base;
        printf("n es igual a: %d\n", n);
    }
    return p;
}