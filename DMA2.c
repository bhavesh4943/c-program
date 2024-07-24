#include<stdio.h>
#include<stdlib.h>
 void main(){
  int *ptr5;
  ptr5=(int*)calloc(5,sizeof(int));
  printf("enter first Five odd numbers :");
  for(int i=0;i<5;i++){
    scanf("%d",&ptr5[i]);
 }
 for(int i=0;i<5;i++){
    printf("%d ",ptr5[i]);
 }

 ptr5=realloc(ptr5,6);
 printf("Enter First  6 Even Numbers :");
  for(int i=0;i<6;i++){
    scanf("%d",&ptr5[i]);
  }
  for(int i=0;i<6;i++){
    printf("%d ",ptr5[i]);
 }

 free(ptr5);
 }