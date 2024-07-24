#include<stdio.h>
 int fact(int n);
  void main(){
    int n;
    printf("ENter the Number :");
    scanf("%d",&n);
    printf("Factorial is %d\n",fact(n));
  }

  int fact(int n){
    if(n==1){
        return 1;
    }
    int fact1=fact(n-1);
    int fact2=fact1*n;
    return fact2;
  }