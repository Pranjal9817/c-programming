//Accept tempratures in Fahrenheit(F)and print it inn Celsius(C) and Kelvin(K).C=5/9(F-32),K=C+273.15

#include<stdio.h>
int main()
{
    float F,C,K;

    printf("Enter the temprature in Fahrenheit:");
    scanf("%f",&F);

    C = (5.0/9.0) * (F - 32);
    printf("Celsius temprature:%f\n",C);

    K = C+273.15;
    printf("Kelvin temprature:%f\n",K);

    return 0;

}