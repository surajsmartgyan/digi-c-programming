#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=9;i++)
    {
      for(j=1;j<=9;j++)
      {
        if(i==j||(i+j==10))
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