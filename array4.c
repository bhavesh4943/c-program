#include<stdio.h>
void  main(){
int n;
printf("Enter the N:");
scanf("%d",&n);
int fibo[n];
fibo[0]=0;
fibo[1]=1;
printf("0\t1\t");
   for(int i=2;i<n;i++){
    fibo[i]=fibo[i-1]+fibo[i-2];
    printf("%d\t",fibo[i]);
   }
  printf("\n"); 
 }