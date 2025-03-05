#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int binary[12], i, number, numberInput;
char binaryOutput[12];

int main() {
  // limpiar la consola
  system("cls");
  // cambiar el color de la consola
  system("color 2B");
  printf("Escribe un numero: \n");
  scanf("%d", &number);
  numberInput = number;
  // repetir el proceso hasta que el número sea 0
  for (i = 0; number > 0; i++) {
    // divide el número por 2 y almacena el residuo en un arreglo
    binary[i] = number % 2;
    // dividir el número por 2 y almacenar el residuo
    number = number / 2;
  }
  for (i = i - 1; i >= 0; i--) {
    // convertir el número binario en una cadena
    // sprintf: es una función que formatea una cadena y la almacena en un buffer de caracteres
    sprintf(binaryOutput, "%s%d", binaryOutput, binary[i]);
    printf("%s\n", binaryOutput);
  }
  printf("El numero %d en binario es: %s\n", numberInput, binaryOutput);
  return 0;
}