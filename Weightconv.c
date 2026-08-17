#include<stdio.h>
int main(){

//weight converter program

int choice = 0;
float pounds =0.0f;
float kilograms=0.0f;

printf("//WEIGHT CONVERTER CALCULATOR//\n");
printf("1.kilograms to pounds\n");
printf("2.Pounds to Kilograms\n");
printf("Enter your choice (1 or 2): ");
scanf("%d",&choice);

if(choice ==1){

    //kilograms to pounds
printf("Enter the weight in kilograms: \n");
scanf("%f",&kilograms);
pounds=kilograms*2.20462;
printf("%.2f Kilograms is equal to %.2f pounds\n",kilograms,pounds);

}else if(choice ==2){
printf("Enter the weight in pounds: \n");
scanf("%f",&pounds);
kilograms=pounds/2.20462;
printf("%.2f pounds is equal to %.2f kilograms",pounds,kilograms);

}else{
    printf("INVALID PLEASE ENTER ONE OR TWO\n");
}


return 0;

















    return 0;
}