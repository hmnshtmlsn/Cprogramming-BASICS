#include<stdio.h>
#include<string.h>


void happyBirthday(char name[],int age){  //This is a function containing parameters

printf("\n Happy birthday to you!");
printf("\n Happy birthday to you!");
printf("\n Happy birthday dear %S",name);
printf("\n You are %d years old now\n",age);

}



int main(){

    char name[50]="";//Initilizing variables for user input
    int age =0;
    printf("Enter your name: ");
    fgets(name,sizeof(name),stdin);//taking user's string input using fgets 
    name[strlen(name)-1]='\0'; //removing the new line character from the input buffer :)

    printf("Enter your age: ");
    scanf("%d",&age);

happyBirthday(name,age);//function containing arguments









    return 0;
}