#include<stdio.h>

 int main(){
    FILE *fptr;
    fptr=fopen("test.txt","w");
    
    // file opening modes
    //"r" :open to read,"rb":open to read in binary
    //"w" : open to write,"wb": open to write in binary
    //"a": open to append it is used to avail old data and also add the new data and store it simultaneously in file
 
  // reading from a file
  /*  char ch;
    fscanf(fptr,"%c",&ch);
    printf("charracter =%c\n",ch);*/
    // writing to a file 
    /* printf("%c\n",fgetc(fptr));
     printf("%c\n",fgetc(fptr));
     printf("%c\n",fgetc(fptr));
     printf("%c\n",fgetc(fptr));
     printf("%c\n",fgetc(fptr));*/
    // fgetc to read char 
    // fputc to write char 

    fputc('A',fptr);
    fputc('P',fptr);
    fputc('P',fptr);
    fputc('L',fptr);
    fputc('E',fptr);
    fclose(fptr);

 return 0;
 }