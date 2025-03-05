#include <stdio.h>
#include <time.h>

// time_t es un tipo de dato definido en la librería time.h
time_t seconds, begin, end;

int main() {
  seconds = time(NULL);
  // ld es un especificador de formato para long int
  printf("Horas desde EPOCH el 1 de enero de 1970: %ld\n", seconds / 3600);

  long i;
  begin = time(NULL);
  for (i = 0; i < 1000000000; i++);
  end = time(NULL);
  // difftime() retorna la diferencia entre dos tiempos
  printf("Tiempo de ejecucion: %f segundos\n", difftime(end, begin));
  return 0;
}