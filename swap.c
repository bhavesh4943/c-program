#include<stdio.h>
 int dowork(int *a,int *b);
 void swap(int *a,int *b); 
 void main(){
  int x=5,y=9;
  swap(&x,&y);
  printf("x =%d,y=%d\n",x,y);
  int a=6,b=9;
   dowork(&a,&b);

 }
  int dowork(int *a,int *b){
   int   sum=*a+*b;
     int prod=(*a)*(*b);
      int avg=(sum)/2;
      printf("Sum is %d\n",sum);
      printf("product = %d\n",prod);
      printf("average is %d\n",avg);

  }

  void swap(int *a,int *b){
    int *c;
    *c=*a;
    *a=*b;
    *b=*c;
   printf("a=%d,b=%d\n",*a,*b);
  }