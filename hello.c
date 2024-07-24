#include<stdio.h>
  int sum(int n);
  void main(){

      int n;
      printf("Enter the Number :");
      scanf("%d",&n);
      printf("Sum is %d\n",sum(n));
    
  }
  int sum(int n){
   if(n==1){
    return 1;
   }
      int sum1=sum(n-1);
      int sum2=sum1+n;
      return sum2;


  }
