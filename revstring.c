#include<stdio.h>
#include<string.h>

 void main(){
   char str[100]="Bhavesh";
   int len=strlen(str)-1;
   char temp;
   for(int i=0;i<len;i++,len--){
     temp=str[i];
     str[i]=str[len];
     str[len]=temp;
   }
   printf("reversed string :%s",str);
  
 }