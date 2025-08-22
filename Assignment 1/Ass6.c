//Accept three dimensions length (l),breadth(b) and height(h of a cuboid and 
//print surface area and volume (surface area=2(lb+bh+lh),volume=lbh)

#include<stdio.h>
int main()
{
    float l,b,h,Surface,volume;

    printf("Enter Length of Cuboid:\n");
    scanf("%f",&l);

    printf("Enter Breadth of Cuboid\n");
    scanf("%f",&b);

    printf("Enter Height of Cuboid:\n");
    scanf("%f",&h);

    Surface=2*(l*b+b*h+l*h);
    printf("Surface Area of Cuboid:%f\n",Surface);

    volume=l*b*h;
    printf("Volume of Cuboid:%f",volume);

    return 0;


}