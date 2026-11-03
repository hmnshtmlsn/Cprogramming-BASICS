#include<stdio.h>
// variable prototypes declaration
void checkBalance(float balance);
float deposit();
float witdraw(float balance);
//-----------------------------------------------------
int main(){
//banking program to make america great again ;)

int choice=0;
float balance=0.0f;

printf("/////////Welcome To The Bank////////\n");

do{
printf("\nSelect an option:\n");
printf("\n1.Check Balance\n");
printf("2.Deposit Money\n");
printf("3.Witdraw Money\n");
printf("4.Exit\n");
printf("\nEnter your choice: ");
    scanf("%d",&choice);

    switch(choice){
    case 1:
    checkBalance(balance);
    break;

    case 2:
    balance=balance+deposit();
    break;

    case 3:
    balance=balance-witdraw(balance);
    break;
    
    case 4:
    printf("\nThankyou For using the bank\n");
    break;

    default:
    printf("\nInvalid choice please select a valid choice\n");

    }

}while(choice !=4); //heart of the program

return 0;
}

//---------------------------------------------------------------

void checkBalance(float balance){
printf("\nYour current balance is: $%.2f\n",balance);

}
float deposit(){
float amount =0.0f;

printf("\nEnter amount to diposit: $");
scanf("%f",&amount);

if(amount < 0){

    printf("Invalid amopunt\n");
    return 0.0f;
}else{
    printf("Sucessfully deposited $%2.f\n",amount);
}


    return amount;

}
float witdraw(float balance){
    float amount =0.0f;
printf("\nEnter the amount you would like to witdraw: $\n");
scanf("%f",&amount);
if(amount < 0){
    printf("\nInvalid ammount");
    return 0.0f;
}else if(amount >balance){
    printf("\nHit the road dude Your balance is $%.2f\n",balance);
    return 0.0f;
}else{
    printf("Sucessfully withdrew $%.2f\n",amount);
    return amount;
}



return 0.0f;
}