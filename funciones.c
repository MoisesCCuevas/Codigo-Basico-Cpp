#include <stdio.h>
// funciones si argumentos y sin valor de retorno

// declaración de la función
void functionNameNn();

// definición de la función
void functionNameNn() {
    // código de la función
    int a, b;
    a = 100;
    b = 230;
    functionNameCn(a, b);
}

// funciones con argumentos y sin valor de retorno

void functionNameCn(int arg1, int arg2);

void functionNameCn(int arg1, int arg2) {
    // código de la función
    int suma;
    suma = functionNameCc(arg1, arg2);
    printf("La suma es: %d\n", suma);
}

// funciones sin argumentos y con valor de retorno

int functionNameNc();

int functionNameNc() {
    // código de la función
    return 100;
}

// funciones con argumentos y con valor de retorno

int functionNameCc(int arg1, int arg2);

int functionNameCc(int arg1, int arg2) {
    // código de la función
    int suma, c;
    c = functionNameNc();
    suma = arg1 + arg2 + c;
    return suma;
}

int main()
{
    functionNameNn();
    return 0;
}
