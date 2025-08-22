//withou using temp varibale or without using third variable

#include<stdio.h>
int main(){

    int a,b;

    printf("Enter two integers:");
    scanf("%d%d",&a,&b);

    printf("Original values: a=%d,b=%d\n");

    a=a+b;
    b=a-b;
    a=a-b;

    //a=a*b;
    //b=a/b;
    //a=a/b;

    printf("After interchanged:a=%d=a , b=%d",a,b);


}