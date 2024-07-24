#include<stdio.h>
 void main(){
 int num,prime=1;
 printf("Enter the num: ");
 scanf("%d",&num);
 if(num<=1){
    prime=0;
 }
 else{
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            prime=0;
            break;
        }
    }
 }
 if(prime){
    printf("Prime");
 }
 else{
    printf("Non-prime");
 }



 }