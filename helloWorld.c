// preprocesor commands
#include <stdio.h>

int main() {
    printf("mensaje consola");
    return 0;
}

/*
    Tipados básicos:
    Aritméticos
        (A)  valores enteros
            int 4 Bytes -2,147,483,648 a 2,147,483,648
            unsigned int 4 Bytes (sin signo o que no permite valores negativos) 0 a 4,294,967,295

            short 2 Bytes -32,768 a 32,757
            unsigned short 2 Bytes 0 a 65,535

            long 8 Bytes -9,223,372,036,854,775,808 a 9223372036854775807
            unsigned long 8 Bytes 0 a 18446744073709551615

        (B)  de punto flotante

            float 4 Bytes 1.2E-38 to 3.4E+386 ( 6 decimal places)
            double 8 Bytes 2.3E-308 to1.7E+30815 (15 decimal places)
            long double 10 Bytes 3.4E-4932 to 1.1E+493219 (19 decimal places)
    
    void: especifica que no hay valor disponible, se usa en 3 escenarios;
        1. función que retorna un tipo de dato void
            void function() {}
        2. función tiene argumentos de tipo void
            void random(void) {}
        3. Puntero o apuntador  que va a la dirección de memoria de un objeto, pero no le importa el tipo de dato que tenga.
*/