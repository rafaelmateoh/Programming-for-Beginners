/*Calcula el factorial de 2 numeros con una funcion
    factorial de 1 = 1 * 1
                 2 = 1 * 2 * 2
                 3 = 1 * 2 * 3
 
 X es un contador de repeticiones.
 n1 es el numero ingresado por el usuario
F es el factorial que es el resultado
  x = 1, n1 = ?, F = 1
  x = 1, n1 = 5, F = 1
  while(1 <= 5)
  f = (f)1 * 1(x) = 1
     x = x + 1
     x = 2
  
  x = 2, n1 = 5, F = 1
  while(2 <= 5)
  f = (f)1 * 2(x) = 2
     x = 2 + 1
     x = 3
  
  x = 3, n1 = 5, F = 2
  while(3 <= 5)
  f = (f)2 * 3(x) = 6
     x = 3 + 1
     x = 4
  
  x = 4, n1 = 5, F = 6
  while(4 <= 5)
  f = (f)6 * 4(x) = 24
     x = 4 + 1
     x = 5
  
  x = 5, n1 = 5, F = 24
  while(5 <= 5)
  f = (f)24 * 5(x) = 120
     x = 4 + 1
     x = 5
 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1,x;
    int factorial = 1; //Estamos inicializando la variable con 1
    printf("Enter a number: ");
    scanf("%d",&n1);
    
    x = 1;
    while(x <= n1){
        factorial *=x;
        x++; //x = x + 1
    }
    printf("The value is %d", factorial);
    retur n 0;
}
