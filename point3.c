#include<stdio.h>
 void swap(int *a,int *b);
  void main(){
 
 int x,y;
   x=4;
   y=9;
swap(&x,&y);
   printf("value of x=%d\n",x);
printf("value of y=%d\n",y);
  
  }
  //call by reference 
  void swap(int *a,int *b){
   int c;
    c=*a;
   *a=*b;
   *b=c;
printf("value of a=%d\n",*a);
printf("value of b=%d\n",*b);
  }