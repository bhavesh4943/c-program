#include<stdio.h>
#include<string.h>
 void main(){
 char str[100];
 int i,j,pal=0;
 printf("enter string :");
scanf("%s",&str);
  j=strlen(str)-1;
  for(i=0;i<j;i++,j--){
    if(str[i]!=str[j]){
        pal=1;
        break;
    }
  }
  if(pal){
    printf("It is not a Palindrone");
  }
  else{
    printf("It is  palindrone");
  }
 



 }