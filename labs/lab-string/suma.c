#include <stdio.h>
#include "Conversion.h"

/*
 * suma — imprime la suma de todos los argumentos interpretados como enteros.
 *
 * Uso: ./suma 1 2 3    →  6
 *      ./suma -5 10    →  5
 *
 * Pista: usa ToInteger de Conversion.h para convertir cada argumento.
 *        Iterá con puntero (char **arg), no con indice entero.
 */

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    
    int suma = 0;
    for (int i = 1; i < argc; i++) {
        suma += ToInteger(argv[i]);
    }

    printf("%d\n", suma);

    return 0;
}
