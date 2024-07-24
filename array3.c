#include<stdio.h>
 void rev(int arr[],int n);
 void  main(){
   int arr[]={1,2,3,4,5,6};
    rev(arr,6);
   for(int i=0;i<6;i++){
    printf("%d\t",arr[i]);
 }
 
 }

  void rev(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int firstval=arr[i];
        int secondval=arr[n-i-1];
        arr[i]=secondval;
        arr[n-i-1]=firstval;
    }
 

  }