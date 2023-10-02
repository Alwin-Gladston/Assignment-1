//Calculate a simple interest
#include <stdio.h>
int main ()
{
    float SI,P,R,T;
    printf("Enter Principle:");
    scanf("%f",&P);
    printf("Enter Rate per annum:");
    scanf("%f",&R);
    printf("Enter Time(in years):");
    scanf("%f",&T);
    SI=(P*R*T)/100;
    printf("Simple interest is=%f",SI);
    return 0;
}