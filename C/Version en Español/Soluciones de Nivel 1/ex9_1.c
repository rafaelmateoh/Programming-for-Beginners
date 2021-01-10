/*
 Escribe un programa que lea dos numeros y muestre en pantalla la lista de numeros en el medio o en otras palabras los numeros comprendidos.
 Ejem :
 1 y 6
 (2,3,4,5) Es la lista de numeros comprendidos, entre 1 y 6
 for loop
 */

#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1,n2,x;
    printf("Ingresa un numero: ");
    scanf("%i",&n1);
    printf("Ingresa un numero mayor que el anterior: ");
    scanf("%i",&n2);
    for(x = n1 + 1; x < n2; x++){
        printf("%i,",x);
    }
    printf("\n");
    return 0;
}
