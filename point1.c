#include<stdio.h>
 void main(){

int x,*ptr1;
  ptr1=&x;
  *ptr1=0;
  printf("value of x :%d\n",x);
  printf("*ptr=%d\n",*ptr1);

  *ptr1+=5;
  printf("x:%d\n",x);
  printf("*ptr=%d\n",*ptr1);

  (*ptr1)++;
  printf("X:%d\n",x);
  printf("*ptr:%d\n",*ptr1);
    


 }