#include <stdio.h>

// Es una buena práctica declarar las constantes como mayúsculas
const int COST = 10;
const float TOTAL = 24.56;
const char NEWLINE = '\n';

#define LENGTH 10
#define PIZZA_COST 10.5

int main() {
    // printf("Costo: %d\n", COST);
    // printf("Total: %f\n", TOTAL);
    // printf("Newline: %c\n", NEWLINE);
    // printf("Length: %d\n", LENGTH);
    // printf("Pizza Cost: %f\n", PIZZA_COST);
    float totalPizzas;
    float quantitySlices = 3;
    totalPizzas = PIZZA_COST * quantitySlices;
    printf("Total: %f", totalPizzas);
    printf("%c", NEWLINE);
    return 0;
}