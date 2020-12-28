
#include <stdlib.h>
#include <stdio.h>
int main() {
    int num1,num2,num3;
    int max,min;
    printf("Enter a number: ");scanf("%d",&num1);
    printf("Enter a number: ");scanf("%d",&num2);
    printf("Enter a number: ");scanf("%d",&num3);
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
    printf("\n%d is the greatest number \n", max);
    printf("%d is the smallest number \n\n", min);
    return 0;
}
