#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter Tha days :");
    scanf("%d",&a);
    b=a/360;
    printf("Year  : %d" ,b);
    printf("\n");
    c=(a-360*b)/7;
    printf("Remaining week  : %d" ,c);
    printf("\n");
    d=(a-360*b)%7;
    printf("Remaining days  : %d" ,d);
    return 0;
}