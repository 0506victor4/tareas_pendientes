#include <stdio.h>
#include <cs50.h>

int main(void) {
    int inicio = get_int("Introduce el número de inicio: ");
    int fin = get_int("Introduce el número de fin: ");

    if (inicio > fin) {
        printf("El número de inicio debe ser menor o igual al número de fin.\n");
        return 1;
    }

    for (int i = inicio; i <= fin; i++) {
        printf("meow\n");
    }

    return 0;
}
