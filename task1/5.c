//Write a C program to calculate the distance between two points.
#include <stdio.h>
#include <math.h>

void main()
{
    float x1,x2,y1,y2,distance;
    printf("Inputs x1:");
    scanf("%f",&x1);
    printf("Inputs x2:");
    scanf("%f",&x2);
    printf("Inputs y1:");
    scanf("%f",&y1);
    printf("Inputs y2:");
    scanf("%f",&y2);
    distance =(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    printf("distance of the said points : %.4f",sqrt(distance));
}