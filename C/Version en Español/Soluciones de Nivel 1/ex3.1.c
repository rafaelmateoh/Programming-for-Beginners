/*
 COMIENZO
      Paso 1 → Crea tres variables de tipo enteros, digamos A, B y C
      Paso 2 → Asignar valores a las variables
      Paso 3 → Si A es mayor que B y C, A es el valor más grande
      Paso 4 → Si B es mayor que A & C, B es el valor más grande
      Paso 5 → Si C es mayor que A y B, A es el valor más grande
      Paso 6 → De lo contrario, A, B y C no son valores únicos
   DETENER
 */

#include <stdlib.h>
#include <stdio.h>
int main() {
    int num1,num2,num3;
    printf("Ingresa un numero: ");scanf("%i",&num1);
    printf("Ingresa un numero: ");scanf("%i",&num2);
    printf("Ingresa un numero: ");scanf("%i",&num3);

     if(num1 > num2 && num1 > num3){
        printf("El numero mas grade es %i \n",num1);
    } else if( num2 > num3 && num2 > num1 ){
        printf("El numero mas grande es %i \n",num2);
    } else if( num3 > num2 && num3 > num1){
        printf("El numero mas grande es %i \n",num3);
    }
    if(num1 < num2 && num1 < num2){
    printf("El numero mas pequeno es %d \n",num1);
    }else if(num2 < num3 && num2 < num3){
    printf("El numero mas pequeno es %d \n",num2);
    }else if(num3 < num2 && num3 < num1){
    printf("El numero mas pequeno es %d \n",num3);
    }

    return 0;
}
