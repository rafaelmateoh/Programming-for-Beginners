#include <stdlib.h>
#include <stdio.h>



int main() {
    
    int e; //Extaciones
    printf("What are the four season of the year? \n");
    printf("Enter a number from 1 to 4: ");
    scanf("%d",&e);
  
    if(e == 1){
        printf("You have selected spring \n");
    }else if(e == 2){
        printf("You have selected summer\n");
    }else if(e == 3){
        printf("You have selected fall \n");
    }else if(e == 4){
        printf("You have selected winter \n");
    }else {
       printf("Error,\n");
    }
    return 0;
}

