//B104020011-危湘妤
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 20
void element_toUpper(char a[]){
    int i=0;
    for(i=0; i<strlen(a); i++){
        a[i]=toupper(a[i]);
    }
    printf("The string after uppercased is: %s",a);
}
void element_toLower(char a[]){
    int i=0;
    for(i=0; i<strlen(a); i++){
        a[i]=tolower(a[i]);
    }
    printf("The string after lowercased is: %s",a);
}
void element_reverse(char a[]){
    printf("When we make your input string reversed: %s",strrev(a));
}
int main(){
    char a[SIZE];
    printf("Enter a string: ");
    fgets(a,SIZE,stdin);
    printf("Your input is:%s\n",a);
    element_toUpper(a);
    element_toLower(a);
    element_reverse(a);
    return 0;
}