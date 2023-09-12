//Write a C program to print all the Factors of a Given Number

#include<stdio.h>
void main(){
   int num,i;
   printf("Enter The Number to find all factor of this number:");
   scanf("%d",&num);
   printf("The all factors :%d \n",num);
   for(i=1;i<num;i++)
   {
       if(num%i==0)
       {
          printf("%d, ",i); 
       }
   }
   
  
}