/*
Crea un programa que imprima si un numero es par o impar

Explicacion
El operador de módulo (%) calcula el resto después de dividir el primer por el segundo. 
Los números que tienen Zero de residuo o restante son números pares
y los que tienen 1 son números impares

Example 1:
10 % 2 
= 2 x 5 = 10
= 10 - 10 = 0

Example 2:      |10 % 2 == 0
10 % 3          |10 % 3 == 1  
= 3 x 3 = 9     |10 % 5 == 0  
= 10 - 9 = 1    |10 % 7 == 3                
*/

#include <stdio.h>
#include <stdlib.h>


int main() {
    int x,resultado; //Declaramos 2 variables de tipo entero
    
    printf("Inserta un numero: "); // Imprime un mensaje
    scanf("%i",&x); // Almacena el valor insertado dentro de la variable x


    resultado = x % 2; // Calcula el restante de X y guardalo dentro de la variable resultado
    if(resultado == 0){ // Si el resultado es igual a zero es un numero par
        printf("Ese numero es par \n");
    } else{ // de lo contrario imprime no lo es
        printf("Ese numero es impar \n");
    }
    return 0;
}


