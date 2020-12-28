#include <stdlib.h>
#include <stdio.h>

//Crea un programa que entre el 1 y 5 y que devuelva las estaciones del ano
// 1 Primavera, 2 Verano, 3 Otono, y 4 invierno

int main() {
   
    int e;    

    printf("What are the four season of the year? \n");
    printf("Enter a number from 1 to 4: ");
    scanf("%d",&e);
  
    switch (e) {
        case 1:
            printf("You have selected spring \n");
            break;
        case 2:
            printf("You have selected summer \n");
            break;
        case 3:
            printf("You have selected fall \n");
            break;
        case 4:
            printf("You have selected winter \n");
            break;
        default:
            printf("Error\n");
            break;
    }
    return 0;
}
