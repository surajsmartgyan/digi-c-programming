//Write a C program to count duplicate elements in a Array.

#include<stdio.h>
#define N 1000
int main(){

    int arr[N];
   int n,j,i,temp=0;
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
           if(arr[i]==arr[j])
           {
            temp++;
            break;
           }
       }
   }
    printf("Find Duplicate Elements in array : %d",temp);
  return 0;
}