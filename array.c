#include<stdio.h>
 void main(){
  int arr[4]={1,2,3,4,};
   int i;
   for(i=3;i>=0;i--){
        printf("%d,",arr[i]);
   }
   printf("\n");

    int aadhar[5];
    //input
    for(int i=0;i<5;i++){
        printf("%d index :",i);
        scanf("%d",&aadhar[i]);
    }

    //output 
    for(int i=0;i<5;i++){
        printf("%d index =%d\n",i,aadhar[i]);
    }

      
      

 }
 