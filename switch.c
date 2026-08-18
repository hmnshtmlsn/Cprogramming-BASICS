#include<stdio.h>
int main(){

char dayofweek='\0';

printf("Enter the day of the week (U,M,T,W,T,R,F,S): ");
scanf("%c",&dayofweek);
switch(dayofweek){

    case 'S':
    printf("It is Sunday\n");
    break;
    
    case 'M':
    printf("It is Monday\n");
 break;

    case 'T':
    printf("It is Tuesday\n");
 break;

    case 'W':
    printf("It is Wednesday\n");
 break;

    case 'R':
    printf("It is Thursday\n");
 break;

    case 'F':
    printf("It is Friday\n");
 break;

    case 'U':
    printf("It is Saturday\n");
     break;

     default:
     printf("Please enter a character from (U,M,T,W,T,R,F,S)\n");
}













    return 0;
}