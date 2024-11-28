#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    string string1 = get_string("Ingresa la primera cadena: ");
    string string2 = get_string("Ingresa la segunda cadena: ");

    char mensaje[strlen(string1) + strlen(string2) + 2]; 
    sprintf(mensaje, "%s %s", string1, string2);

    printf("Mensaje concatenado: %s\n", mensaje);

    return 0;
}
