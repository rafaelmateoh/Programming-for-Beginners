#include <stdlib.h>
#include <stdio.h>
int main() {
    int num1,num2,num3;
    printf("Enter a number: ");scanf("%i",&num1);
    printf("Enter a number: ");scanf("%i",&num2);
    printf("Enter a number: ");scanf("%i",&num3);

     if(num1 > num2 && num1 > num3){
        printf("%i is the greatest number \n",num1);
    } else if( num2 > num3 && num2 > num1 ){
        printf("%i is the greatest number \n",num2);
    } else if( num3 > num2 && num3 > num1){
        printf("%i is the greatest number\n",num3);
    }
    if(num1 < num2 && num1 < num2){
    printf("%d is the smallest number \n",num1);
    }else if(num2 < num3 && num2 < num3){
    printf("%d is the smallest number  \n",num2);
    }else if(num3 < num2 && num3 < num1){
    printf("%d is the smallest number  \n",num3);
    }

    return 0;
}
