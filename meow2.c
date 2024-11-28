#include <stdio.h>
#include <cs50.h>

int main(void) {
    int veces;

    veces = get_int("¿Cuántas veces quieres imprimir 'meow'? ");

    if (veces <= 0) {
        printf("meow\n");
    } else {
        for (int i = 0; i < veces; i++) {
            printf("meow\n");
        }
    }

    return 0;
}
