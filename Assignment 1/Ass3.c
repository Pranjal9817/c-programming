//Accept dimension of a cylinder and print the surface area and volume (SA=2*pi*r*r+2*pi*r*h  vol=pi*r*r*h)
#include<stdio.h>
int main()
{
    float pi=3.14159;
    float r,h,surface,volume;

    printf("Enter Radius of cylinder:");
    scanf("%f",&r);

    printf("Enter Height of Cylinder:");
    scanf("%f",&h);

    surface=(2*pi*r*r)+(2*pi*r*h);
    printf("Surface Area of Cylinder: %.3f\n", surface);

    volume=pi*r*r*h;
    printf("Volume of Cylinder: %3f\n",volume);

    return 0;

}