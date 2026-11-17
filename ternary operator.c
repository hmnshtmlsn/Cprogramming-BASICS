#include<stdio.h>
int main(){

//learning ternary operator

int hours= 12;
int minutes= 30;
char *meridiem =(hours<12)? "AM":"PM";

printf("%02d:%02d %s",hours ,minutes ,meridiem);

return 0;
}