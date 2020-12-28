/*
Example 1:
10 % 2 
= 2 x 5 = 10
= 10 - 10 = 0

Example 2:
10 % 3
= 3 x 3 = 9
= 10 - 9 = 1
------------------
10 % 2 == 0
10 % 5 == 0
10 % 7 == 3
10 % 3 == 1
-------------------
*/

#include <stdio.h>
#include <stdlib.h>


int main() {
    int x,result;
    
    printf("Enter a number: ");
    scanf("%i",&x);
    result = x % 2;
    if(result == 0){
        printf("This an Even number \n");
    } else{
        printf("This an Odd number  \n");
    }
    return 0;
}


