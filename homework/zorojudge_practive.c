#include <stdio.h>
int main(void){
    int t,a[5];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
        if(a[1]-a[0]==a[2]-a[1]){
            a[4]=a[3]+(a[1]-a[0]);
            for(int j=0;j<5;j++){
                printf("%d ",a[j]);
            }
            printf("\n");
        }
        else{
            a[4]=a[3]*(a[1]/a[0]);
            for(int j=0;j<5;j++){
                printf("%d ",a[j]);
            }
            printf("\n");
        }
    }
    return 0;
}