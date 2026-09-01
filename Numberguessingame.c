#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    //Number guessing game


    srand(time(NULL));  //generating random seed according to the time for random number

    int guess=0;    //declaring required variables
    int tries=0;
    int min = 1;
    int max=100;

    int answer=(rand() % (max-min+1))+min;  //mathematical formula worth noting to get the random number between 1 and 100

    printf("************** NUMBER GUESSING GAME**************\n");

    do{
        printf("Guess a number between %d - %d \n",min,max);   //using do while loop 
        scanf("%d",&guess);
        tries++;   //notes the number of tries each time the loop runs
if(guess<answer){
    printf("TOO LOW\n");  //hints for the player

}else if(guess>answer){
    printf("TOO HIGH\n");
}else{
    printf("Correct\n");
}

    }while(guess!=answer);   //check if the guess is correct
    printf("The answer is %d\n",answer);
    printf("It took you %d tries",tries);   //printing the answer

    return 0;
}