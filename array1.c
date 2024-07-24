#include<stdio.h>
 // array using fuction
    void pn(int arr[],int n);
     void main()
     {
    int arr[]={1,2,3,4,5,6};
      pn(arr,6);
     }
      void pn(int arr[],int n){
            for(int i=0;i<n;i++){
                printf("%d\t",arr[i]);
            }
      }