#include <stdio.h>
#define SIZE 100
void transfer(char input[]){
    int i=0;
    //printf("%s",input);
    for(int i=0;input[i]!='\0';i++){
        if(input[i]<91){
            input[i]+=32;
        }
        else{
            input[i]-=32;
        }
    }
    printf("Output: %s",input);
}
void main(void){
    char input[SIZE];
    printf("Input: ");
    scanf("%s",&input);
    transfer(input);
    //printf("Output: %s",transfer(input));
}
