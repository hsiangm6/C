#include <stdio.h>


int main() 
{
  int t[3]={0};
  int *b=t;
  //t+2==b+2;
  //*(t+1)==*(b+1);
  &t[2]=b+2;
  printf("%p",t);
}

