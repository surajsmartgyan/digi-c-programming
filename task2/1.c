//C program to implement a calculator to do basic arithmetic operations

// #include <stdio.h>

// int main()
// {
//     char ch;
//     float x,y,total=0;
//     printf("Enter The Choice of some operators Like +,-,*,/ :");
//     scanf("%c",&ch);
//     printf("Enter The Value Of X :");
//     scanf("%f",&x);
//     printf("Enter The Value Of Y :");
//     scanf("%f",&y);
//     switch(ch)
//     {
//         case'+':total=x+y;
//         printf("Sum of :%f",total);
//         break;
//         case'-':total=x-y;
//         printf("Sub of :%f",total);
//         break;
//         case'*':total=x*y;
//         printf("multiply of :%f",total);
//         break;
//         case'/':total=x/y;
//         printf("Division of :%f",total);
//         break;
//         default:printf("Plz Enter Valid Operator .");
//     }
//     return 0;
// }
#include <stdio.h>

int main()
{
    char ch;
    float x,y,total=0;
    printf("Enter The Choice of some operators Like +,-,*,/ :");
    scanf("%c",&ch);
    printf("Enter The Value Of X :");
    scanf("%f",&x);
    printf("Enter The Value Of Y :");
    scanf("%f",&y);
    if(ch=='+')
    {
        total=x+y;
        printf("Value Is : %f",total);
    }
    else if(ch=='-')
    {
        total=x-y;
        printf("Value Is : %f",total);
    }
    else if(ch=='*')
    {
        total=x*y;
        printf("Value Is : %f",total);
    }
    else if(ch=='/')
    {
        total=x/y;
        printf("Value Is : %f",total);
    }
    else
    {
        printf("Plz Enter Valid Operator .");
    }
    return 0;
}