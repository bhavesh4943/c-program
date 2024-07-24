#include<stdio.h>
 struct student{
char name[20];
int roll;
float cgpa;
 };
 void str(struct student s1);
 void main(){
      
struct student s1={"Bhavesh",74,9.5};
 str(s1);


 }
 void str(struct student s1){

printf("Name is %s\n",s1.name);
printf("roll no is %d\n",s1.roll);
printf("cgpa is %f\n",s1.cgpa);


 }