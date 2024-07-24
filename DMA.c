#include<stdio.h> 
#include<stdlib.h>
 void main(){
        //malloc for memory allocation
        //calloc for continuos allocation
        //free()
        //realloc for reallocation

        //malloc
  int *ptr;
  ptr= (int *) malloc(5 * sizeof(int));
  ptr[0]=1;
  ptr[1]=3;
  ptr[2]=5;
  ptr[3]=7;
  ptr[4]=9;

  for(int i=0;i<5;i++){
    printf("%d\n",ptr[i]);
  }

  float *ptr1;
  ptr1=(float*) malloc(5*sizeof(float));
  ptr1[0]=1;
  ptr1[1]=4;
  ptr1[2]=6;
  ptr1[3]=8;
  ptr1[4]=9;
  for(int i=0;i<5;i++){
    printf("%f\n",ptr1[i]);
  }

// calloc function always initializes with zero 
 int *ptr2;
 ptr2=(int *) calloc(5,sizeof(int));
 for(int i=0;i<5;i++){
    printf("%d\n",ptr2[i]);
  }
  int n;
  int *ptr3;
  printf("Enter n :");
  scanf("%d",&n);
  ptr3=(int *)calloc(n,sizeof(int));
  for(int i=0;i<n;i++){
    printf("%d\n",ptr3[i]);
  }
  //free() we use it to free memory allocated by calloc and malloc
  free(ptr3);
  ptr3=(int *)calloc(3,sizeof(int));
  for(int i=0;i<3;i++){
    printf("%d\n",ptr3[i]);
  }
// realloc :increase or decrease memory using  the same pointer & size
 
 int *ptr4;
 ptr4=(int*)calloc(5,sizeof(int));
 printf("Enter num (5):");
  for(int i=0;i<5;i++){
    scanf("%d",&ptr4[i]);
  }
  ptr4=realloc(ptr4,8);
   printf("Enter num (8):");
  for(int i=0;i<8;i++){
    scanf("%d",&ptr4[i]);
 }
 //print 
  for(int i=0;i<8;i++){
    printf("Number %d is %d\n",i,ptr4[i]);
  }
  int *ptr5;
  ptr5=(int*)calloc(5,sizeof(int));
  printf("enter first Five odd numbers :");
  for(int i=0;i<5;i++){
    scanf("%d",&ptr5[i]);
 }
 ptr5=realloc(ptr5,6);
 printf("Enter First  6 Even Numbers :");
  for(int i=0;i<5;i++){
    scanf("%d",&ptr5[i]);
  }
 }