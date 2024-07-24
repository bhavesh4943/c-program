#include<stdio.h>
#include<string.h>
 struct student{
      int roll;
      float cgpa;
      char name[100];
     
 };
  void printinfo(struct student s1);// function with structure

 void main(){

    struct student ece[100];
    struct student coe[100];
    
    ece[0].roll=56;
    strcpy(ece[0].name,"bhavesh");
    ece[0].cgpa=7.5;
     
     printf("Student Name :%s\n",ece[0].name);
     printf("Student Roll no : %d\n",ece[0].roll);
     printf("Student cgpa : %f\n",ece[0].cgpa);
      //initialization of structures 
      struct student s1={74,9.7,"Bhavesh"};
      printf("Student Name :%s\n",s1.name);
      // pointers to structures 

  struct student *ptr;
  ptr=&s1;
  printf("student roll no :%d\n",(*ptr).roll);
  printf("Student cgpa :%f\n",ptr->cgpa);
   //arrow operator ->
   printf("\n");
  printinfo(s1);
 

 }

 void printinfo(struct student s1){
   printf("student Informations \n");
   printf("Student name :%s\n",s1.name);
   printf("Student Roll no :%d\n",s1.roll);
   printf("student cgpa :%f\n",s1.cgpa);
   

 }

