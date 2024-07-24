#include<stdio.h>
  void storetables(int ar[][10],int n,int m,int number);
   void main(){
    int tables[2][10];
             storetables(tables,0,10,2);
             storetables(tables,1,10,3);
             for(int i=0;i<10;i++){
                printf("%d\t",tables[0][i]);
             }
             printf("\n");
             for(int i=0;i<10;i++){
                printf("%d\t",tables[1][i]);
             }


   }
    void storetables(int ar[][10],int n,int m,int number){
       for(int i=0;i<m;i++){
        ar[n][i]=number *(i+1);
       }
 

    }