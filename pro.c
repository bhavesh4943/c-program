#include<stdio.h>
#include<string.h>

#define MAX_EMPLOYEE 100

//define a structure for employees
typedef struct{
    int id;
    char name[50];
    float salary;
}Employee;

void addemployee(Employee employees[],int *count);
void displayemployee(Employee employees[],int count);
//void updateemployee(Employee employees[],int count);
//void deleteemployee(Employee employees[],int *count);

int main(){
    Employee employees[MAX_EMPLOYEE];
    int count=0,choice;

    while (1){
        printf("\n Employee managment system\n");
        printf("1. add employe.\n");
        printf("2. Display Employees.\n");
        printf("3. Update employee.\n");
        printf("4. Delete employee.\n");
        printf("5. Exit.\n ");
        printf(" Enter your choice : ");
        scanf("%d",&choice);
        switch (choice){
        case 1 : 
        addemployee(employees,&count);
        break;

        case 2 :
        displayemployee(employees,count);
        break;

       // case 3 : 
        //updateemployee(employees,count);
       // break;

       //case 4 :
        //deleteemployee(employees,&count);
        //break;

        case 5 :
        printf("EXIT");
        return 0;

        default : 
        printf("Enter the valid number from the option's !") ;
        }
    }
    return 0;
}
    void addemployee(Employee employees[],int *count){
        if(*count >= MAX_EMPLOYEE){
        printf("maximum space limit ,no more data can be added .");
        return ;
        }
        printf("\nENTER the detail of employee :\n");
        printf("Enter id : ");
        scanf("%d",&employees[*count].id);
        printf("\nEnter name : ");
        scanf("%s",&employees[*count].name);
        printf("\nEnter salary : ");
        scanf("%f",employees[*count].salary);

        (*count)++;
        printf("\n Employee added succesfully . ");
    }

    void displayemployee(Employee employees[],int count){
        if(count == 0 ){
            printf("No detail to display . ");
            return ;
        }
        printf("\n i'd \t\t Name \t\t Salary ");
        for(int i=0 ; i<=count ; i++){
            printf("\n %d\t\t %s \t\t %f ",employees[i].id,employees[i].name,employees[i].salary);
            
        }
    }