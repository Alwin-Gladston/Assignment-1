//C program to find percentage of 5 subjects
#include <stdio.h>
int main ()
{
    float a,b,c,d,e,percent;
    printf("Enter marks of subject 1:");
    scanf("%f",&a);
    printf("Enter marks of subject 2:");
    scanf("%f",&b);
    printf("Enter marks of subject 3:");
    scanf("%f",&c);
    printf("Enter marks of subject 4:");
    scanf("%f",&d);
    printf("Enter marks of subject 5:");
    scanf("%f",&e);
    percent=(a+b+c+d+e)/500;
    printf("Percentage of the 5 subjects is:%f",percent);
    return 0;
}