#include<stdio.h>
 
  void odd(int arr[],int n);

   void main(){
   int arr[]={1,2,3,4,5,6,7,8,9};
    odd(arr,9);
  printf("\n");
  char str[20]="Bhavesh";
  for(int i=0;str[i]!='\0';i++){
  printf("%c\n",str[i]);
  }
  int age=22;
  int *ptr;
  ptr=&age;
  printf("%d\n",*ptr);
  *ptr+=5;
  printf("*ptr+=5 =%d\n",age);

   }
   void odd(int arr[],int n){
         for(int i=0;i<=n;i++){
           if(arr[i]%2!=0){
            printf("%d,",arr[i]);
           }

         }

   }