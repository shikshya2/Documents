#include<stdio.h>
int main()
{
    float v, r, h;
    printf("Enter the radius and height of the cylinder: ");
    scanf("%f%f", &r, &h);
    v = 22.0/7.0 * r * r * h;
    printf("The volume is %f\n", v);
    return 0;
}