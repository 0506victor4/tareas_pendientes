#include <stdio.h>
#include <cs50.h>

int main(void) {
    int veces;

    do {
        veces = get_int("¿Cuántas veces quieres imprimir 'meow'? ");
    } while (veces <= 0);

    for (int i = 0; i < veces; i++) {
        printf("meow\n");
    }

    return 0;
}
