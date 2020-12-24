
#include <stdlib.h>
#include <stdio.h>
int main() {
    int num1,num2,num3;
    int max,min;
    printf("Ingresa un numero: ");scanf("%d",&num1);
    printf("Ingresa un numero: ");scanf("%d",&num2);
    printf("Ingresa un numero: ");scanf("%d",&num3);
    if(num1 > num2){
        if(num2 > num3){
            max = num1;
        }else {
            max = num3;
        }
    }else {
        if( num2 > num3){
            max = num2;
        } else{
            max = num3;
        }
    }
    if(num1 < num2){
        if(num2 < num3){
            min = num1;
        }else {
            min = num3;
        }
    }else {
        if( num2 < num3){
            min = num2;
        } else{
            min = num3;
        }
    }
    printf("\nEl numero mas grande es %d \n", max);
    printf("El numero mas pequeno es %d \n\n", min);
    return 0;
}
