//Write a C program that accepts 4 integers p, q, r, s from the user where q, r and s are positive
//and p is even. If q is greater than r and s is greater than p and if the sum of r and s is greater than
//the sum of p and q print "Correct values", otherwise print "Wrong values"..
#include <stdio.h>
#include <math.h>
int main()
{
    int p,q,r,s;
    printf("Enter the number p:");
    scanf("%d",&p);
    printf("Enter the number q:");
    scanf("%d",&q);
    printf("Enter the number r:");
    scanf("%d",&r);
    printf("Enter the number s:");
    scanf("%d",&s);
    if(p%2==0)
    {
        if((r<q && p<s)<r+s)
        {
            printf("Right Value ");
        }
        else{
            printf("wrong value ");
        }
    }
    else
    {
        printf("p is odd value ");
    }
    return 0;
}