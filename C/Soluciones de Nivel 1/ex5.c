/*
 Crea un programa que imprima las letras        |
 del alfabeto desde la A hasta la Z (A-Z)
 
 En el codigo ASSCI, el 65 representa la letra A y el 90
 la letra Z
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
    int a;
    for(a=65;a<=90;a++){
        printf("%c \n",a);
    }
    return 0;
}
