#include<Stdio.h>
#include<stdlib.h>
#include<time.h>

int getComputerchoice();
int getUserchoice();
void checkwinner(int userChoice, int computerChoice);


int main(){
//rock paper scissors game

srand(time(NULL));

printf("*************Rock Paper Scissors**************\n");

int userChoice=getUserchoice();
int computerChoice=getComputerchoice();

switch(userChoice){
    case 1:
    printf("You chose ROCK!\n");
    break;
    case 2:
    printf("You chose PAPER!\n");
    break;
    case 3:
    printf("You chose SCISSORS!\n");
    break;
}

switch(computerChoice){
    case 1:
    printf("Computer chose ROCK!\n");
    break;
    case 2:
    printf("Computer chose PAPER!\n");
    break;
    case 3:
    printf("Computer chose SCISSORS!\n");
    break;
}
checkwinner(userChoice,computerChoice);

    return 0;
}
int getComputerchoice(){
  return (rand() % 3)+1;
}
int getUserchoice(){
int choice=0;
do{
    printf("Choose an option\n");
    printf("1.Rock\n");
    printf("2.Paper\n");
    printf("3.Scissors\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

}while(choice<1 || choice >3);

    return choice;

}
void checkwinner(int userChoice, int computerChoice){
if(userChoice==computerChoice){
    printf("Its a TIE!");

}else if(userChoice==1 && computerChoice==3 || (userChoice==2 && computerChoice==1) || (userChoice==3 && computerChoice==2)){
    printf("You WIN!");
}else{
    printf("You LOSE!");
}




}
