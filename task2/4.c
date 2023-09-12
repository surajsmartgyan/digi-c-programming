//Write a C program to display all integers within the range 100-150 whose sum of digits is an even
//number

#include <stdio.h>

int main()
{
    int i;
    for(i=100;i<=150;i++)
    {
        if(i%2==0)
        {
            printf("sum of range 100 to 150 Number:%d",i);
        }
        printf("\n");
    }
    return 0;
}