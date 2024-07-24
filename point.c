#include<stdio.h>
 void main(){
    int age=22;
    int *ptr=&age;
    int _age=*ptr;
    printf("Age value is %d\n",_age);
    printf("Address of age value :%p\n",ptr);
    printf("Address of ptr :%p\n",&ptr);
    printf("Normal print :%d\n",age);
    printf("Print value using pointer :%d\n",*ptr);
    printf(" print value using * and & operator :%d\n",*(&age));


 }