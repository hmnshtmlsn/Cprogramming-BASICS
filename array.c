#include<stdio.h>

int main(){

//introducing array 
//so basically array is a storage that holds more than 1 value

int numbers[]={10,20,30,40,50};
char grades[] ={'A','B','C','D','E','F'};
char name[]="Himanshu Timalsina";


int size =sizeof(numbers) / sizeof(numbers[0]); // so this is a trick to find out the number of elements in my array :)
// so no matter how many elements i add up there i won't have to take care of my loop it does it itself for me because of the trick i used above 





for(int i=0; i<size; i++){

printf("%d\n",numbers[i]);
}




return 0;}


