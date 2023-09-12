//Write a C program to check whether the given integer is a multiple of both 5 and 7
#include <stdio.h>

int main()
{
    int z;
    printf("Enter value to check divided by 5or 7 or not :");
    scanf("%d",&z);
    if(z%5==0&&z%7==0)
    {   
    printf("Entered Value Is Divisible for 5 or 7.");
    }
    else{
        printf("Is Not Divisible for 5 or 7.");
    }

    return 0;
}