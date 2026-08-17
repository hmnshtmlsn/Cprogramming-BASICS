#include<stdio.h>
int main(){

    double x;
    double y;
    double z;
    char mul='*';
    char add='+';
    char sub='-';
    char div='/';
char cho;
    printf("////////////WELCOME TO CALCULATOR/////////////\n");

    printf("Enter a number: \n");
    scanf("%lf",&x);
    printf("Enter another number\n");
    scanf("%lf",&y);
printf("Choose the operation you would prefer [+,-,*,/] : ");
scanf(" %c",&cho);
if(cho=='+'){
z=x+y;
printf("The addition is %.2lf\n",z);

}else if(cho=='-'){
    z=x-y;
    printf("The substraction is %.2lf\n",z);

}else if(cho=='*'){
    z=x*y;
    printf("The multiplication is %.2lf\n",z);
}else if(cho=='/'){
    z=x/y;
    printf("The division is %.2lf\n",z);

}else{

    printf("INVALID COMMAND PLEASE TRY AGAIN WITH A VALID COMMAND");
}
    
return 0;
}