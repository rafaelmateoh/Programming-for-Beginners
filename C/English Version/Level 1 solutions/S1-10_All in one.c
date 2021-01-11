#include <stdio.h>
#include <stdlib.h>
int main() {
    //Ex1: Write a "Hello World" program
    printf("Hello World \n");
    /*Ex2: print wheather a number is Even or Odd */
    int x,y;
    printf("Print wheather a number is Even or Odd \n");
    printf("Enter a number:  ");
    scanf("%i",&x);
    y = x % 2;
    if(y == 0){
        printf("The number is even \n\n");
    }else {
        printf("The number is Odd \n\n");
    }
    //Ex3: Biggest of Three numbers
    int n1,n2,n3;
    printf("Biggest of Three numbers \n");
    printf("Enter a number: ");scanf("%i",&n1);
    printf("Enter a number: ");scanf("%i",&n2);
    printf("Enter a number: ");scanf("%i",&n3);
    if(n1 > n2 && n1 > n3){
        printf("%i is the greatest number \n\n",n1);
    }else if(n2 > n1 && n2 > n3){
        printf("%i is the greatest number \n\n",n2);
    }else if(n3 > n1 && n3 > n2){
        printf("%i is the greatest number \n\n",n3);
    }else{
        printf("Error \n\n");
    }
    /*Ex4:
     program that reads a number
     from 1 to 5 and return the seasons of the year
     1 Spring, 2 Summer,
     3 Autumn, and 4 Winter
     */
    int n4;
    printf("\nTo return one of the seasons of the year select a number: \n");
    printf("Enter a number: ");scanf("%i",&n4);
    if( n4 == 1){
        printf("Spring \n");
    }else if(n4 == 2){
        printf("Summer \n");
    }else if(n4 == 3){
        printf("Autumn  \n");
    }else if(n4 == 4){
        printf("Winter  \n");
    }else{
        printf("Error \n");
    }
    //Ex5: Print Alphabets from A-Z
    printf("\n\nAlphabets from A-Z \n");
    int i;
    for(i = 65; i < 90; i++){
        printf("%c ",i);
    }
        printf("\n");
    //Ex6: Find Factorial of a Number
    // 5 = 5 x 4 x 3 x 2 x 1
    int factorial = 1;
    printf("\nFind factorial of a number \n");
    printf("Enter a number: ");
    scanf("%d",&n4);
    for(i = 1; i <= n4; i++){
        factorial = factorial * i;
    }
    printf("%d \n\n",factorial);
    
    printf("Press enter to continue \n");
    getchar();
    
    //Ex7 print the multiplication table from 1 to 12
    
    int mult;
    x = 1;
    //i = 1;
    
    for(i = 1; i <= 12; i++){
        for(x = 1; x <= 12; x++){
            mult = x * i;
            printf("%d x %d = %d \n",i,x,mult);
        }
    }
    //Ex8: Write a program that allows you to practice basic multiplication problems.
    
    printf("Multiplication practice level 1 \n");
    printf("3 x 6 = ");scanf("%d",&n1);
    if(n1 == 18){
        printf("Correct \n");
    }else {
        printf("Wrong \n");
    }
    printf("4 x 8 = ");scanf("%d",&n2);
    if(n2 == 32){
        printf("Correct \n");
    }else {
        printf("Wrong \n");
    }
    printf("6 x 6 = ");scanf("%d",&n3);
    if(n3 == 36){
        printf("Correct \n");
    }else {
        printf("Wrong \n");
    }
    printf("9 x 2 = ");scanf("%d",&n4);
    if(n4 == 18){
        printf("Correct \n");
    }else {
        printf("Wrong \n");
    }
    //displays the set of whole numbers in between the two numbers.
    printf("displays the set of whole numbers in between the two numbers \n");
    printf("Enter a number: ");scanf("%d",&n1);
    printf("Enter a greater number: ");scanf("%d",&n2);
    for(n1 = n1 + 1; n1 < n2; n1++){
        printf("%i, ",n1);
    }printf("\n\n");
    // Ex10: Looping problems
    int sum = 0;
      for(i = 1; i <= 10; i++){
          sum += i;
          printf("%i ",i);
      }
      printf("\n%i ",sum);
    printf("\nNow is your turn \nEnter a number: ");
    scanf("%i",&n1);
    sum = 0;
    for(i = 1; i <= n1; i++){
       sum = sum + i;
    }printf("The result is %d \n",sum);
    sum =0;
    int average;
    for(i = 1; i <= 10; i++){
        printf("Enter a number: ");scanf("%d",&n1);
        sum = sum + n1;
    }
    average = sum / 10;
    
    printf("The sum result is %d \n",sum);
    printf("The average result is %d \n",average);
    int cube;
    printf("Third power calculator \n");
    printf("Enter a number: ");scanf("%d",&n1);
    cube = n1 * n1 * n1;
    printf("The third power of %d is equal to %i \n\n",n1,cube);
    return 0;
}

