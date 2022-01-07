#include <stdio.h>
void compare(char string1[], char string2[]){
    for(int i=0;string[i]!='\0' && string2[i]!='\0';i++){

    }
}

void main(void){
    char string1[20], string2[20];
    printf("enter a string1: ");
    scanf("%s",&string1);
    printf("enter a string2: ");
    scanf("%s",&string2);
    while(string1[0]!='-' || string2[0]!='-' ){
        compare(string1, string2);
        printf("enter a string1: ");
        scanf("%s",&string1);
        printf("enter a string2: ");
        scanf("%s",&string2);
        
    }
}
