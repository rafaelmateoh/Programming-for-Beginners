/* Write a program that is able to calculate the factorial of a number with a function
     factorial of 1 = 1 * 1
                  2 = 1 * 2 * 2
                  3 = 1 * 2 * 3
 */

#include <stdio.h>
#include <stdlib.h>

int factorial();

int main() {
    int a,b;
    printf("Enter a number: ");
    scanf("%i",&a);
    printf("Enter a number: ");
    scanf("%i",&b);
    
    factorial(a,b);
    
    return 0;
}

int factorial(int a, int b){
    int x,result1 = 0,result2 = 0;
    
    for(x = 0; x <= a; x++){
        result1 = x * a;
    }
    printf("The result is %d \n",result1);
    
    for(x = 0; x <= b; x++){
        result2 = x * b;
    }
    printf("The result is %d \n",result2);
    
    return 0;
}
