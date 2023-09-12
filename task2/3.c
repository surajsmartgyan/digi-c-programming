//Write a C program to display all the multiples of 3 within the range 10 to 50

#include <stdio.h>

int main()
{
    int i;
    for(i=10;i<=50;i++)
    {
        if(i%3==0)
        {
            printf("3 Multiplies Number is :%d",i);
        }
        printf("\n");
    }
    return 0;
}