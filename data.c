#include<stdio.h>
    typedef struct computerengineeringstudent{
      char name[100];
      int roll;
      float cgpa;
    } coe;
    
     
     typedef struct electricalengineeringstudent{
     char name[100];
      int roll;
      float cgpa;
     } ece;
     void main(){
              coe s1[3];
              ece s2[3];
              for(int i=0;i<3;i++){
             printf("Enter Info(Name,rollno,cgpa)For COE[%d]student :",i+1);
             scanf("%s",&s1[i].name);
             scanf("%d",&s1[i].roll);
             scanf("%f",&s1[i].cgpa);
              }
              printf("\n");
               for(int i=0;i<3;i++){
             printf("Enter Info(Name,rollno,cgpa)For ECE[%d]student :",i+1);
             scanf("%s",&s2[i].name);
             scanf("%d",&s2[i].roll);
             scanf("%f",&s2[i].cgpa);
     }

      coe s3={"Bhavesh",74,9.5};
      coe *ptr;
      ptr=&s3;
      printf("Name is %s\n",(*ptr).name);
      printf("Roll no is %d\n",(*ptr).roll);
      printf("CGPA is %f\n",(*ptr).cgpa);


     }

 

