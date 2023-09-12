//Write a C program to Print all the elements of an array in Reverse order

#include<stdio.h>
#define N 1000
int main(){

    int arr[N];
   int n;
   printf("Enter the number element in array :");
   scanf("%d",&n);
   printf("Plz Enter elements in array :");
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);

   }
   printf("Reveresd array :");
   for(int i=n-1;i>=0;i--)
   {
       printf("%d, ",arr[i]);
   }
  return 0;
}