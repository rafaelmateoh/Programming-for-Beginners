#include <stdlib.h>
#include <stdio.h>

//Crea un programa que entre el 1 y 5 y que devuelva las estaciones del ano
// 1 Primavera, 2 Verano, 3 Otono, y 4 invierno

int main() {
   
    int e;    

    printf("Quieres ver las estaciones del anio? \n");
    printf("Ingresa un numero entre 1  y 4: ");
    scanf("%d",&e);
  
    switch (e) {
        case 1:
            printf("Has selecionado primavera \n");
            break;
        case 2:
            printf("Has selecionado Verano \n");
            break;
        case 3:
            printf("Has selecionado Otono \n");
            break;
        case 4:
            printf("Has selecionado invierno\n");
            break;
        default:
            printf("Error, porfavor trate mas tarde \n");
            break;
    }
    return 0;
}