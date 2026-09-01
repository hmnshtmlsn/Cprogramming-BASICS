#include<stdio.h>

int add(int x, int y){

int result=x+y;
return result;
}

int sub(int x,int y){
    int result=x-y;
    return result;
}



int main(){

    //variable scope
int result =sub(6,4);
printf("%d",result);
    


    return 0;
}
