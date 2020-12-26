/*Calcula el factorial de 2 numeros con una funcion
    factorial de 1 = 1 * 1
                 2 = 1 * 2 * 2
                 3 = 1 * 2 * 3
 */

#include <stdio.h>
#include <stdio.h>

int main() {
    int n,i;
    int function = 1;
    
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i = 1; i <= n; i++){ //
        function *= i;
    }
    printf("The result is %d \n", function);
    return 0;
}


