/*
 Crea un programa que pueda Imprime la tabla
de multiplica del 1 al 12
 */

 #include <stdio.h>
 #include <stdlib.h>

 // Print the mult table from 1 - 9
 int main() {
     
     int x,y;

     for(x = 1;x <= 12; x++){
         for(y = 1; y <= 12; y++){
             printf("%i x %i = %i \n",x,y,x*y);
         }
     }
     
     
     return 0;
 }
