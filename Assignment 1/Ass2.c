// Accept radius of circle and print the area and circumference of circle 
#include<stdio.h>
int main()
{
    float r;
    float pi=3.14159;
    float area,circumference;

    printf("Enter radius of circle:");
    scanf("%f",&r);

    area=pi*r*r ;
    printf("Area of Circle is %f\n",area);

    circumference=2*pi*r;
    printf("Circumference %f\n",circumference);

    return 0;
}
