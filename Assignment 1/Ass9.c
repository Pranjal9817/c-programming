// A cashier has currency notes of denomination 1, 5 and 10. Accept the amount to 
//be withdrawn from the user and print the total number of currency notes of each 
//denomination the cashier will have to give. 

#include<stdio.h>
int main()
{
 
    int amount;
    int tens, fives, ones;

    
    printf("Enter amount to withdraw: ");
    scanf("%d", &amount);

    
    tens = amount / 10;
    amount = amount % 10;  

    
    fives = amount / 5;
    amount = amount % 5;   

  
    ones = amount;

    printf("10 rupee notes: %d\n", tens);
    printf("5 rupee notes: %d\n", fives);
    printf("1 rupee notes: %d\n", ones);

    return 0;
}

    
