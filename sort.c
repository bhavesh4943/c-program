#include<stdio.h>
 void main(){
    int arr[]={45,845,2,3};
    int temp=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    

printf("printing original array\n");
 for(int i=0;i<size;i++){
    printf("%d,",arr[i]);
 }
 for(int i=0;i<size;i++){
  for(int j=i+1;j<size;j++){
    if(arr[i]>arr[j]){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
  }
  }
printf("ascendinng oredr:\n");
for(int i=0;i<4;i++){
    printf("%d,",arr[i]);
}

 }