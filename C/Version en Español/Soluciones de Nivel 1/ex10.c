
#include <stdio.h>
#include <stdlib.h>
//De mostrar los primeros 10 números naturales
int sum(int y){
    int x,suma;
    suma = 0;
    for(x = 1; x <= y; x++){
        printf("%i ",x);
        /*Para encontrar la suma de los primeros 10  */
        suma = x + suma;
    }
    if(y == 10){
        printf("\nLa suma total de los 10 primeros numero es %d \n",suma);
    }else {
        printf("\nEl resultado es %d \n",suma);
    }
    return 0;
}
int main() {
    sum(10);
    //display n terms of natural number and their sum.
    int n1;
    printf("\nVamos es tu turno! \n");
    printf("Ingresa un numero: ");scanf("%i",&n1);
    sum(n1);
    
    /*
     read 10 numbers from keyboard and find their sum and average.
     */
   float n2,sum = 0,aver,cube = 1;
    float x;
    
    for(x = 1; x <= 10; x++){
        printf("Ingresa un numero: ");
        scanf("%f",&n2);
        sum +=n2;
    }
    aver = sum / 10;
    printf("La suma total es %.1f \n",sum);
    printf("El promedio es %.2f \n",aver);
    
   //display the cube of the number upto given an integer.
    printf("Cubo \n");
    x = 0;
    while(x < 3){
        printf("Ingresa un numero: ");
        scanf("%f",&n2);
        cube = n2 * n2 * n2;
        printf("%.2f \n",cube);
        x++;
    }
    printf("\n");
    return 0;
}
