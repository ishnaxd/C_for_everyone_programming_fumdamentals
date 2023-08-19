#include <stdio.h>
#define PI 3.14159
int main()
{
    double r,area;
    printf("Enter the radius of circle in cm: ");
    scanf("%lf",&r);
    area=PI*r*r;
    printf("The area is : %lf",area);
    return 0;
}