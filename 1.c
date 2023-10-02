//C program to find area and circumference of circle
#include <stdio.h>
int main ()
{
    int r;
    float pi=3.14,ArCir,PeCir;
    printf("Enter Radius:");
    scanf("%d",&r);
    ArCir=pi*r*r;
    PeCir=2*pi*r;
    printf("Area of Circle=%f\n",ArCir);
    printf("Circumference of Circle=%f",PeCir);
    return 0;
}