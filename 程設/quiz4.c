//B104020011-危湘妤
#include <stdio.h>
#include <string.h>
int indexOf(char string[], char substr[]){
    char *p1, *p2, *p3;
    int i=0,j=0,flag=0;
    p1 = string;
    p2 = substr;

    for(i = 0; i<strlen(string); i++){
        if(*p1 == *p2){
            p3 = p1;
            for(j = 0;j<strlen(substr);j++){
                if(*p3 == *p2)
                {
                p3++;p2++;
                } 
                else
                break;
            }
            p2 = substr;
            if(j == strlen(substr)){
                flag = 1;
                printf("%d\n",i+1);
                return i;
            }
        }
        p1++; 
    }
    if(flag==0){
        printf("-1\n");
        return -1;
    }
}
int main(){
    char string[20];
    char substr[20];
    indexOf("Hello. It is me.", "is");
    indexOf("Hello. It is me again.", "ME");
    return 0;
}