#include<stdio.h>
#include<string.h>
 typedef struct computerengineeringstudent{
     int roll;
     float cgpa;
     char name[100];
 }coe;
  
   void main(){

  coe s1;
  s1.roll=56;
  s1.cgpa=9.7;
  strcpy(s1.name,"bhavesh");
  printf("name :%s\n",s1.name);
  printf("roll no :%d\n",s1.roll);
  printf("cgpa :%f\n",s1.cgpa);

   }