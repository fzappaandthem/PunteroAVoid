#include<stdio.h>
#include<stdlib.h>

int main()
{
    int entero = 7;
    char string[7] = "hola";
    puts("El puntero a void apunta a la misma dirección de memoria que 'entero'");
    void* pVoid = &entero ;

    printf("El tamaño del puntero a void es: %ld\n", sizeof(pVoid));
    printf("el puntero a void apunta a: %p\n", pVoid);
    printf("La posición de memoria a la que apunta el puntero a void, contiene: %d\n", (*(int*) pVoid));
    printf("El tamaño del puntero al entero es: %ld\n", sizeof(&entero));
    printf("El tamaño del puntero a -la primer pos del- string es: %ld\n", sizeof(&string));
    printf("El tamaño del tipo de dato en la primer pos del string es: %ld\n", sizeof(string[0]));
    puts("El puntero a void ahora va a alocar la cantidad de memoria que usa 'string'");
    pVoid = malloc(sizeof(string));
    printf("El tamaño del puntero al string es: %ld\n", sizeof(&entero));
    puts("El puntero a void ahora apunta a 'string'");
    pVoid = string;
    printf("el puntero a void apunta a la posición: %p\n", pVoid);
    printf("La primer posición de memoria a la que apunta el puntero a void, contiene el char: %c\n", (*(char*) pVoid));

    printf("La posición de memoria a la que apunta el puntero a void, contiene: %s\n", ((char*) pVoid));


    return 0;
}