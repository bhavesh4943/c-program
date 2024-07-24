#include<stdio.h>
 void main(){
    int i=2;
    int *ptr2=&i;
    int **pptr=&ptr2;

    printf("i=%d\n",i);
    printf("**pptr=%d\n",**pptr);
    printf("*ptr :%d\n",*ptr2);
 }