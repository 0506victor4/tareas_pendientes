#include <stdio.h>
#include <cs50.h>

int main(void) {
    int sum = 0;
    for (int i = 1; i <= 1000; i++) {
        sum += i;
    }

    printf("La sumatoria de todos los números entre 1 y 1000 es: %d\n", sum);
}
