#include<stdio.h>

 void string(char ar[]);
 void main(){
 char name[]="bhavesh";
char lastname[]="Mali";

 string(name);
 string(lastname);
   char fullname[100];
   fgets(fullname,100,stdin);
   puts(fullname);
   char *canchange="hello world";
   puts(canchange);
   canchange="Hello";
   puts(canchange);
   char cannotchange[]="hello";
  }
  void string(char ar[]){
    for(int i=0;ar[i]!='\0';i++){
    printf("%c",ar[i]);
 }
 printf("\n");

  }