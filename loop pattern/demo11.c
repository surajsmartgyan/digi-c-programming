#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
      for(j=1;j<=i;j++)
      {
        if(i==1||i==5||i==j||j==1)
        {
            printf("*");
        }
        else{
            printf(" ");
        }
        
      }
      printf("\n");
    }
}