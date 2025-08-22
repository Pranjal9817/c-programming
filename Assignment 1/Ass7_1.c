//The basic salary of an employee is decided at the time of employment, which 
//may be different for different employees. Apart from basic, employee gets 10% 
//of basic as house rent, 30% of basic as dearness allowance. A professional tax of 
//5% of basic is deducted from salary. Accept the employee id and basic salary for 
//an employee and output the take home salary of the employee. 

#include <stdio.h> 
int main()
{
    int employee_id;      
    float BA,HRA ,DA,PT,GS,THS,BS; 


    printf("Enter Employee ID: ");
    scanf("%d", &employee_id);

    printf("Enter Basic Salary: ");
    scanf("%f", &BS);

    HRA = 0.10 * BS; // 10% of basic
    DA = 0.30 *BS;   // 30% of basic

    // Calculate professional tax deduction
    PT = 0.05 *BS;     // 5% of basic

    // Calculate Gross Salary
    GS = BS + HRA + DA;

    // Calculate Take Home Salary
    THS =GS - PT;

    printf("\n Salary Details for Employee ID: %d \n", employee_id);
    printf("Basic Salary:           %.2f\n", BS);
    printf("House Rent Allowance:   %.2f\n", HRA);
    printf("Dearness Allowance:     %.2f\n", DA);
    printf("Gross Salary:           %.2f\n", GS);
    printf("Professional Tax (Deducted): %.2f\n", PT);
    printf("Take Home Salary:       %.2f\n", THS);
    

    return 0; 
}
