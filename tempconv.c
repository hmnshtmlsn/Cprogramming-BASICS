#include<stdio.h>
int main(){
//Temperature conversionn program

char choice ='\0';
float fahrenheit =0.0f;
float celsius =0.0f;

printf("TEMPERATURE CONVERTER\n");

printf("C. Celsius to Fahrenheit\n");
printf("F. Fahrenheit to Celsius\n");

printf("Is the temperature in Celsius (C) or Fahrenheit (F)?: \n");
scanf("%c",&choice);

if(choice=='C'){
    printf("Enter the temperature in Celsius: \n");
    scanf("%f",&celsius);
    fahrenheit=(celsius *9/5)+32;
    printf("%.2f degree celsius is equal to %.2f fahrenheit\n",celsius,fahrenheit);
}else if(choice=='F'){

    printf("Enter the temperature in fahrenheit: \n");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)*5/9;
    printf("%.2f fahrenheit is equal to %.2f celsius\n",fahrenheit,celsius);
}else{
    printf("INVALID INPUT PLEASE TRY AGAIN THANKYOU");
}







    return 0;
}