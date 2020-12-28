/*
 print the alphabet (A-Z)
 
 In the ASSCI code, 65 represents the letter A and 90
the letter Z
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
