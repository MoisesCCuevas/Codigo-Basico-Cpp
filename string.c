#include <stdio.h>
#include <string.h>

char str1[60];
char str2[60];

int main() {
  printf("Escribe un mensaje: ");
  gets(str1);
  printf("Escribe otro mensaje: ");
  gets(str2);
  // invierte el sentido de la cadena
  strrev(str1);
  printf("Mensaje invertido: %s\n", str1);  
  // compara dos cadenas "string compare", retorna 0 si son iguales
  if (strcmp(str1, str2) == 0) {
    printf("Los mensajes son iguales\n");
  } else {
    // concatena dos cadenas "string concatenate", lo almacena en la primera cadena
    strcat(str1, str2);
    printf("Los mensajes son diferentes\n");
    printf("Mensaje concatenado: %s\n", str1);
  }
  return 0;
}