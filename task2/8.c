//Write a C program to Print elements of an array in Ascending Order.

#include<stdio.h>
#define N 1000
int main(){

    int arr[N];
   int n,j,i,temp;
   printf("Enter the number element in array :");
   scanf("%d",&n);
   printf("Plz Enter elements in array :");
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);

   }
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(arr[i]>arr[j])
           {
              temp=arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
           }
       }
   }
    printf("Ascending array :");
    for(i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
  return 0;
}