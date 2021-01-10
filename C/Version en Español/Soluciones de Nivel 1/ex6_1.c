/*Calcula el factorial de un numero
    factorial de 1 = 1 * 1
                 2 = 1 * 2 * 2
                 3 = 1 * 2 * 3
 */

#include <stdio.h>
#include <stdlib.h>

int factorial();

int main() {
    int a,i;
    int factorial = 1;
    
    printf("Enter a number: ");
    scanf("%i",&a);
    
    for(i = 1; i <= a; i++){
        factorial *= i;
    }
    printf("%d \n",factorial);
    
    return 0;
}
