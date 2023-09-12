// Online C compiler to run C program online
#include <stdio.h>
#include <conio.h>
int main() {
    // Write C code here
    int r;
    printf("Enter radius of circle  :");
    scanf("%d",&r);
    printf("Enter perimeter of circle: %d",2*(3.14*r));
    printf("\n");
    printf("Enter area of circle  : %d",(3.14*r*r));
    return 0;
}