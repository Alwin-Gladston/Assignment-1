//Convert tempreture Celsius into fahrenheit
#include <stdio.h>
int main ()
{
    float C,F;
    printf("Enter celsius:");
    scanf("%f",&C);
    F=(C*9/5)+32;
    printf("Claculated fahrenheit is=%f",F);
    return 0;
}