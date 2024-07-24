#include<stdio.h>
#include<string.h>
 struct vector{
 int x;
 int y;
 };

 void printvector(struct vector v1,struct vector v2,struct vector sum);
void main(){

  struct vector v1={10,5};
  struct vector v2={3,6};
   struct vector sum={0};
   
   printvector(v1,v2,sum);
 

}
 void printvector(struct vector v1,struct vector v2,struct vector sum){
        
  sum.x=v1.x+v2.x;
  sum.y=v1.y+v2.y;
 printf("sum of x =%d\n",sum.x);
 printf("sum of y =%d\n",sum.y);



 }
