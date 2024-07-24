#include<stdio.h>
 void printadd(int *n);
  void main(){
    int n=4;
    printadd(&n);
    printf("address of n:%p\n",&n);

  }
  void printadd(int *n){
   printf("address of n:%p\n",n);
  }