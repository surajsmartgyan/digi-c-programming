
//Write a C program that reads two integers and checks whether they are multiplied or not.
#include <stdio.h>

int main()
{
    int x,y,z;
    printf("Enter The Value Of X :");
    scanf("%d",&x);
    printf("Enter The Value Of Y :");
    scanf("%d",&y);
    if(x>y)
    { 
        z=x%y;
        if(z==0)
        {
           printf(" Multiplied "); 
        }
        else
        {
             printf("Not  Multiplied ");
        }
    }
    if(x<y)
    { 
        z=y%x;
        if(z==0)
        {
           printf(" Multiplied "); 
        }
        else
        {
             printf("Not  Multiplied ");
        }
    }

    return 0;
}