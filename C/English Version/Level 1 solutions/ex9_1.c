/*
 Write a program that reads two whole numbers
 and displays the set of whole numbers
 between the two numbers.
                       
 Example:
  1 and 6
 The set of whole numbers between 1 and 6
 inclusive is (2,3,4,5)
 for loop
 */

#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1,n2,x;
    printf("Enter a number: ");
    scanf("%i",&n1); //3
    printf("Enter a greater number: ");
    scanf("%i",&n2); //4
    for(x = n1 + 1; x < n2; x++){
        printf("%i,",x);
    }
    printf("\n");
    return 0;
}
