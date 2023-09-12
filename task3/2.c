//Write a C Program to Find LCM (Least Common Multiple) of Two Numbers in C Using While Loop.

#include<stdio.h>

int main()
{
    int i,j,max;
    printf("Enter first Number to find lcm:");
    scanf("%d",&i);
    printf("Enter second Number to find lcm:");
    scanf("%d",&j);
    max=(i>j)?i:j;
    while(1)
    {
        if((max%i==0)&&(max%j==0))
        {
            printf("LCM of %d and %d is %d :" , i,j,max);
            break;
        }
        max++;
    }
    return 0;
}