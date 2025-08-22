//Accept two integers from the user and interchange them.Display the interchanged numbers.using temporary variable without using temporary variable
//a. using + and - operator  b.using / and * operator

#include<stdio.h>
int main()
{
    int a,b,temp;

    printf("Enter the two integers:");
    scanf("%d%d",&a,&b);

    printf("Original values: a=%d,b=%d\n");
    temp=a;
    a=b;
    b=temp;

    printf("Display the interchanged numbers:a=%d,b=%d",a,b);

    return 0;

}