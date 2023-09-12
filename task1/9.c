
//Write a C program that reads 5 numbers and sums all odd values between them.
#include <stdio.h>
#include <math.h>
int main()
{
    int i,value[5],sum=0;
    printf("Enter the number num1:");
    scanf("%d",&value[0]);
    printf("Enter the number num2:");
    scanf("%d",&value[1]);
    printf("Enter the number num3:");
    scanf("%d",&value[2]);
    printf("Enter the number num4:");
    scanf("%d",&value[3]);
    printf("Enter the number num5:");
    scanf("%d",&value[4]);
    for(i=0;i<5;i++)
    {
        if((value[i]%2)!=0)
        {
            sum+=value[i];
        }
    }
    printf("Sum of all odd values :%d",sum);
    printf("\n");
    return 0;
}