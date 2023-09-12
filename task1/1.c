// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int h,w;
    printf("Enter Height of rectangle :");
    scanf("%d",&h);
    printf("Enter Width of rectangle :");
    scanf("%d",&w);
    printf("Enter perimeter : %d",2*(h+w));
    printf("\n");
    printf("Enter area : %d",(h*w));
    return 0;
}