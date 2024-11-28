#include <stdio.h>
#include <cs50.h>

int main() {
    
    int tabla[10];
    int num = get_int("Introduce un número: ");

    for (int i = 0; i < 10; i++) {
        tabla[i] = num * (i + 1);
    }

    printf("Tabla de multiplicar de %d:\n", num);
    for (int i = 0; i < 10; i++) {
        printf("%d x %d = %d\n", num, i + 1, tabla[i]);
    }

    return 0;
}
