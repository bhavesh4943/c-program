#include<stdio.h>
  void printtables(int arr[][10],int n,int m,int number);
  void array(int arr[],int n);
   int factorial(int n);
   int fibonacci(int n);

   void main(){
    int tables[2][10];
    printtables(tables,0,10,2);
    printtables(tables,1,10,3);
    
    // reverse printing of an array 
   int arr1[]={1,2,3,4,5,6};
     array(arr1,6);
    for(int i=0;i<6;i++){
      printf("%d,",arr1[i]);
    }
  int n;
  printf("Enter the Terms :");
  scanf("%d",&n);
  int fibo[n];
   fibo[0]=0;
   fibo[1]=1;
   printf("0,1,");
   for(int i=2;i<=n;i++){
    fibo[i]=fibo[i-1]+fibo[i-2];
    printf("%d,",fibo[i]);
   }
     int f;
     int fact;
     fact=1;
     f=5;
     for(int i=1;i<=f;i++){
       fact=fact*i;
     }
     printf("Factorial is %d\n",fact);

     int no=4;

printf("factorial is %d",factorial(no));

        int fibon;
        printf("Enter terms :");
        scanf("%d",&fibon);
        for(int i=0;i<=fibon;i++){
        printf("%d,",fibonacci(i));
        }

   }
    int factorial(int n){
      for(int i=1;i<=n;i++){
        if(n==1){
          return 1;
        }
        int fact1=factorial(n-1);
        int fact2=fact1*n;
        return fact2;
      }
    


    }
    void array(int arr[],int n){
       for(int i=0;i<n/2;i++){
        int Firstval=arr[i];
        int secondval=arr[n-i-1];
        arr[i]=secondval;
        arr[n-i-1]=Firstval;
       }
    }

   void printtables(int arr[][10],int n,int m,int number){
     for(int i=1;i<=m;i++){
      arr[n][i]=number*i;
      printf("%d,",arr[n][i]);
     }
     printf("\n");
   }
   int fibonacci(int n){
      if(n==0){
      return 0;
      }
      else if(n==1){
        return 1;
      }
      else{

        return (fibonacci(n-1)+fibonacci(n-2));
      }
     
  



   }
    