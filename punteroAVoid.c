#include<stdio.h>
#include<stdlib.h>

int main()
{
    int entero = 7;
    char string[7] = "hola";
    void* pVoid ;

    printf("El tamaño del puntero a void es: %ld\n", sizeof(pVoid));
    printf("El tamaño del puntero al entero es: %ld\n", sizeof(&entero));
    printf("El tamaño del puntero a -la primer pos del- string es: %ld\n", sizeof(&string));
    printf("El tamaño del tipo de dato en la primer pos del string es: %ld\n", sizeof(string[0]));


    return 0;
}