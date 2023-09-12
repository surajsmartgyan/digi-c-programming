#include <stdio.h>

void main()
{
    int a,b;
    float c;
    printf("Enter the distance of KM :");
    scanf("%d",&a);
    printf("total fuel spent in liters :");
    scanf("%d",&b);
    printf("\n");
    c=a/b;
    printf("Average consutption in (KM/Li) :%f",c);
    
    
}