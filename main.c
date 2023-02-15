#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
        inicio = 0;
        exit(-1);
    }
}

void procesamiento() {
    printf("%c\n", (char) buffer[inicio]);
}
