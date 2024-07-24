#include<stdio.h>
 void main(){

int arr[]={2,6,89,4};
int min=arr[0],max=arr[0];
int i,j;
for(i=0;i<4;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
printf("Max is %d\n",max);
printf("Min is %d",min);


 }