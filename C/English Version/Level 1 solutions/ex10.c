/*
 display the first 10 natural numbers
 */
#include <stdio.h>
#include <stdlib.h>
//display the first 10 natural numbers.
int sum(int y){
    int x,suma;
    suma = 0;
    for(x = 1; x <= y; x++){
        printf("%i ",x);
        /*find the sum of first 10 natural numbers. Go to the editor Expected Output :  */
        suma = x + suma;
    }
    if(y == 10){
        printf("\nthe sum of the first 10 natural numbers is %d \n",suma);
    }else {
        printf("\nthe result is %d \n",suma);
    }
    return 0;
}
int main() {
    sum(10);
    //display n terms of natural number and their sum.
    int n1;
    printf("\nNow is your turn \n");
    printf("Enter a number: ");scanf("%i",&n1);
    sum(n1);
    
    /*
     read 10 numbers from keyboard and find their sum and average.
     */
   float n2,sum = 0,aver,cube = 1;
    float x;
    
    for(x = 1; x <= 10; x++){
        printf("Enter a number: ");
        scanf("%f",&n2);
        sum +=n2;
    }
    aver = sum / 10;
    printf("The sum total is %.1f \n",sum);
    printf("The average is %.2f \n",aver);
    
   //display the cube of the number upto given an integer.
    printf("Cube \n");
    x = 0;
    while(x < 3){
        printf("Enter a number: ");
        scanf("%f",&n2);
        cube = n2 * n2 * n2;
        printf("%.2f \n",cube);
        x++;
    }
    printf("\n");
    return 0;
}
