#include<stdio.h>
#include<string.h>
 struct student {
    int roll;
    float cgpa;
    char name[100];
 };
 int main(){

   struct student s1;
   s1.roll=3;
   s1.cgpa=7.5;
   strcpy(s1.name,"Bhavesh");
   printf("student Name :%s\n",s1.name);
   printf("student roll no :%d\n",s1.roll);
   printf("student cgpa :%f\n",s1.cgpa);
   printf("/n");
    struct student s2;
    s2.roll=4;
    s2.cgpa=7.9;
    strcpy(s2.name,"rajat");
    
    printf("student Name :%s\n",s2.name);
    printf("Student Roll no:%d\n",s2.roll);
    printf("Student cgpa : %f\n",s2.cgpa);
    printf("\n");

    struct student s3;
    s3.roll=6;
    s3.cgpa=9.6;
    strcpy(s3.name,"vyom");

    printf("Student Name :%s\n",s3.name);
    printf("Student Roll no :%d\n",s3.roll);
    printf("Student cgpa :%f\n",s3.cgpa);



    return 0;
 }