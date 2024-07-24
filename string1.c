
#include<stdio.h>
#include<string.h>
   void salting(char pass[]);
   void slice(char str1[],int n,int m);
    int countvowels(char str[]);

   void charcheck(char str[],char ch);

     void main(){
      char str1[100];
      int i=0;
      char ch;
     for(i=0;ch!='\n';i++){
        scanf("%c",&ch);
        str1[i]=ch;
     }
      
      str1[i]='\0';
      puts(str1);
      char password[100];
      printf("Enter Your Password :");
      scanf("%s",&password);
      salting(password);
   
      char string[10]="HelloWorld";
       slice(string,3,6);
       printf("\n");
       char str3[]="helloworld";
       printf("Vowels are :%d\n",countvowels(str3));
       char str4[]="Bhavesh";
       char ch1='e';
       charcheck(str4,ch1);
            }

            void charcheck(char str[],char ch){
               for(int i=0;str[i]!='\0';i++){
                  if(str[i]==ch){
                     printf("Character is presnt ");
                     return;
                  }
               }
               printf("Character is not present ");
            }


     int countvowels(char str3[]){
      int count=0;
        for(int i=0;str3[i]!='\0';i++){
         if(str3[i]=='a' ||str3[i]=='e' || str3[i]=='i' ||str3[i]=='o' || str3[i]=='u'){
            count++;
         }
        }
        return count;
     }




    void salting(char pass[]){
      char salt[]="123";
      strcat(pass,salt);
      puts(pass);
     
    }
     void slice(char str1[],int n, int m){

            for(int i=n;i<=m;i++){
               printf("%c",str1[i]);
            }
       
     }