//Write a C Program to check Whether You Are Eligible for Voting or Not.
#include<stdio.h>

int main()
{
    int age;
    printf("How many year old you:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("You are elegible for vote .");
    }
    else{
        printf("You are not eligible for vote .");
    }
}