#include<stdio.h>
 void square(int *n);
  

  void main(){
   int number=4;
   square(&number);
   printf("Number =%d\n",number);
  }

  void square(int *n)
  {
*n=(*n)*(*n);
printf("square is %d\n",*n);

  }
