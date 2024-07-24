#include<stdio.h>
  void dowork(int a,int b,int *sum,int *prod,int *avg);

   void main(){
    int a,b;
    a=3,b=5;
    int sum,prod,avg;
    dowork(a,b,&sum,&prod,&avg);
     printf("Sum is %d\n",sum);
     printf("Product is %d\n",prod);
     printf("Average is %d\n",avg);
   // maximum of 2 number using pointer 
     int x=6,y=7;
      int *ptr1,*ptr2;
      ptr1=&x;
      ptr2=&y;
      if(*ptr1>*ptr2){
        printf("%d is greater\n",*ptr1);
      }
      else{
        printf("%d is greater \n",*ptr2);
      }
 

 

   }
    void dowork(int a,int b,int *sum,int *prod,int *avg){
     
     *sum=a+b;
     *prod=a*b;
     *avg=(a+b)/2;
    }
