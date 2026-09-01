#include<stdio.h>
#include<stdbool.h>

void hello(char name[],int age); //function prototype
bool ageCheck(int age); //function prototype
int main(){

 hello("Himanshu",19);
if(ageCheck(30)){
    printf("You are old enough for this job");

}else{
    printf("You are not old enough ");
}

    return 0;
}

void hello(char name[],int age){
printf("Hello %s\n",name);
printf("You are %d years old\n",age);

}

bool ageCheck(int age){
    if(age>=18){
        return true;
    }else{return false;}
}
