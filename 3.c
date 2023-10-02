//C program to find the area of triangle given base and height
#include <stdio.h>
int main ()
{
    int b,h;
    float ArTri;
    printf("Enter base:");
    scanf("%d",&b);
    printf("Enter height:");
    scanf("%d",&h);
    ArTri=(b*h)*1/2;
    printf("Area of triangle:%f",ArTri);
    return 0;
}