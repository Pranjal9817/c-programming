//Accept initial velocity(u),acceleration(a)and time(t).
//print the final velocity (v) and distance (s)travelled (v=u+at,s=u+at*t)

#include<stdio.h>
int main()
{
    float u,a,t,v,s;

    printf("Enter initial velocity:");
    scanf("%f",&u);

    printf("Enter acceleration:");
    scanf("%f",&a);

    printf("Enter time:");
    scanf("%f",&t);

    v=u+a*t;
    printf("Final Velocity:%f\n",v);

    s=u+a*t*t;
    printf("Final Distance Travelled:%f\n",s);

    return 0;

}
