#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){

//quiz game with 2d array of strings


char questions[][100] ={"1.What is the Largest planet in the solar system?\n"
                        ,"\n2.What is the hottest planet?\n",
                         "\n3.What planet has the most moons?\n",
                        "\n4.Is the Earth Flat?\n"};

char options[][100]={"A.Jupiter\nB.Saturn\nC.Uranus\nD.Neptune\n",
                     "A.Mercury\nB.Venus\nC.Earth\nD.Mars\n",
                     "A.Earth\nB.Mars\nC.Jupiter\nD.Saturn\n",
                     "A.Yes\nB.No\nC.Maybe\nD.Sometimes\n"};


char answerkey[] = {'A', 'B', 'D', 'B'};

int questioncount =sizeof(questions)/sizeof(questions[0]);
char guess='\0';
int score=0;

printf("******Kon banega Tumhara pati******\n\n");

for(int i=0;  i < questioncount;i++){
printf("%s\n", questions[i]);
printf("%s\n",options[i]);
printf("Enter your choice: ");
scanf(" %c",&guess);
guess= toupper(guess);

if(guess ==answerkey[i]){

    printf("\nCORRECT! Ma chod diye bhaiya ji!\n");
    score++;
}else{
    printf("\nWrong! padh likh lo madarchodo\n");
}
printf("\nYour score is %d out of %d points\n",score,questioncount);


printf("\nThankyou for playing the game! have a good time.");

};







    return 0;}