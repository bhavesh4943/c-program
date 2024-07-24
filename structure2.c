#include<stdio.h>
#include<string.h>

 typedef struct address{
    int house;
    int block;
    char city[100];
    char state[100];
 }add;

  void main(){

   add addresses[5]; 
   for(int i=1;i<=5;i++){
  printf("Enter HouseNo , Block No, City and state  for[%d] :\n",i);
  scanf("%d",&addresses[i].house);
  scanf("%d",&addresses[i].block);
  scanf("%s",&addresses[i].city);
  scanf("%s",&addresses[i].state);
   }

   for(int i=1;i<=5;i++){
   printf("InFormation of [%d] Person :\n",i);
   printf("%d ,%d ,%s ,%s\n",addresses[i].house,addresses[i].block,addresses[i].city,addresses[i].state);
   } 

   }
 

