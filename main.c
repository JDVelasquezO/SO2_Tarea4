#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/*
 * DOCUMENTACION INTERNA
 *
 * 1. Se inicializan los archivos de la cabecera main, estableciendo inicio en el inicio del buffer
 *      y fin como el final del arreglo.
 * 2. Se crea un ciclo infinito simulando la ejecución de un sistema operativo
 * 3. Se valida cada entrada del teclado simulando la petición por periféricos al CPU
 * 4. Se verifica si aun hay espacio en la cola de buffer.
 * 5. Si hay espacio aun, se procede a meter en la cola y se procesa la tecla.
 * 6. Si ya no hay espacio se produce un Beep y la salida forzosa del sistema.
 * 7. Se incrementa el contador inicio en 1.
 *
 * */

int main() {
    inicio = 0;
    fin = sizeof(buffer)/sizeof(buffer[0]);

    while (1 == 1) {
        char input;
        scanf("%c", &input);

        if (input != 10) {
            interrupcion();
            buffer[inicio] = (long) input;
            procesamiento();
            inicio = inicio + 1;
        }
    }

    return 0;
}

void interrupcion() {
    if (inicio == fin) {
        printf("Beep!");
        exit(-1);
    }
}

void procesamiento() {
    printf("%c\n", (char) buffer[inicio]);
}
