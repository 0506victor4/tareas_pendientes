#include <stdio.h>
#include <cs50.h>

int findMax(int count) {
    int max = get_int("Número 1: "); 
    for (int i = 2; i <= count; i++) {
        int num = get_int("Número %d: ", i);
        if (num > max) {
            max = num;
        }
    }
    return max;
}

int main(void) {
    printf("Encuentra el número mayor entre 3, 5 y 100 números.\n");

    printf("El número mayor de los 3 números es: %d\n", findMax(3));
    printf("El número mayor de los 5 números es: %d\n", findMax(5));
    printf("El número mayor de los 100 números es: %d\n", findMax(100));

    return 0;
}
