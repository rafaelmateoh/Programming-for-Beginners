#include <stdlib.h>
#include <stdio.h>

int study(void); int quiz_1(void); int quiz_2(void);

int main() { // Main function
int selec,selec2;
    printf("***************************************\n");
    printf("This is a multiplication practice \n");
    printf("***************************************\n\n");
while(selec !=0){
    printf("\nWhat do you want to do? \n");
    printf("(1) Study \n(2) Take a quiz \n(0) Exit\nSelect a number: ");
    scanf("%d",&selec);
    if(selec == 1){
        study();
    }else if(selec == 2){
        printf("What level do you want to take ?\n");
        printf("(1) Level 1\n(2) Level 2 \nSelect a number: ");
        scanf("%d",&selec2);
            if(selec2 == 1){
                quiz_1();
            }else if(selec2 == 2){
                quiz_2();
            }else{
                printf("Error, try later \n");
            }
        }
    }
    return 0;
}
//-----------------------------------------------------------------
int study(){ // This is the multiplication table
    int x,y;
    
    for(x = 2;x <= 12;x++){
        printf("\n");
        for(y = 2; y <= 12; y++){
            printf("%i x %i = %i \n",x,y,x*y);
        }
    }
    return 0;
}
//-----------------------------------------------------------------
int quiz_1(){ //This is a basic quiz
    int a;
    printf("2 x 3 = ");
    scanf("%d",&a);
    if(a == 6){
        printf("That is correct \n\n");
    }else{
        printf("That is incorrect \n\n");
    }printf("2 x 4 = ");
    scanf("%d",&a);
    if(a == 8){
        printf("That is correct \n\n");
    }else{
        printf("That is incorrect \n\n");
    }printf("2 x 2 = ");
    scanf("%d",&a);
    if(a == 4){
        printf("That is correct \n\n");
    }else{
        printf("That is incorrect \n\n");
    }printf("2 x 6 = ");
    scanf("%d",&a);
    if(a == 12){
        printf("That is correct \n\n");
    }else{
        printf("That is incorrect \n");
    }printf("2 x 5 = ");
    scanf("%d",&a);
    if(a == 10){
        printf("That is correct \n");
    }else{
        printf("That is incorrect \n");
    }printf("2 x 8 = ");
    scanf("%d",&a);
    if(a == 16){
        printf("That is correct \n");
    }else{
        printf("That is incorrect \n");
    }
    
    return 0;
}

//-----------------------------------------------------------------
int quiz_2(){ //Same here
    int a;
    printf("3 x 3 = ");
    scanf("%d",&a);
    if(a == 9){
        printf("That is correct \n");
    }else{
        printf("That is incorrect \n");
    }
    printf("4 x 8 = ");
    scanf("%d",&a);
    if(a == 32){
        printf("That is correct \n");
    }else{
        printf("That is incorrect \n");
    }
    printf("5 x 4 = ");
    scanf("%d",&a);
    if(a == 20){
        printf("That is correct \n");
    }else{
        printf("That is incorrect \n");
    }
    printf("7 x 5 = ");
    scanf("%d",&a);
    if(a == 35){
        printf("That is correct \n");
    }else{
        printf("That is incorrect \n");
    }
    printf("2 x 4 = ");
    scanf("%d",&a);
    if(a == 8){
        printf("That is correct \n");
    }else{
        printf("That is incorrect \n");
    }
    printf("9 x 3 = ");
    scanf("%d",&a);
    if(a == 27){
        printf("That is correct \n");
    }else{
        printf("That is incorrect \n");
    }
    printf("7 x 3 = ");
    scanf("%d",&a);
    if(a == 21){
        printf("That is correct \n");
    }else{
        printf("That is incorrect \n");
    }
return 0;
}
        
