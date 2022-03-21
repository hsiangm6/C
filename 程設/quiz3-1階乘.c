//B104020011 危湘妤
#include <stdio.h>
void combn(int n, int k){
    long long int sum=1;
    int i=0;
    if(k>(n-k)){
        k=n-k;
    }
    for(i=0;i<k;i++){
        sum=sum*(n-i)/(i+1);
    }
    printf("%lld",sum);
}
void main(void){
    combn(10,2);
}