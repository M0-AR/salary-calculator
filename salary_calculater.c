#include <stdio.h>

int main()
{
    int salary;
    printf("Enter the salary: \n");
    scanf("%d", &salary);
    
    if (salary >= 5000)
        printf("Salary is %d\n", (int)(salary - (salary*0.1)));
    else if (salary >= 3000)
        printf("Salary is %d\n", (int)(salary - (salary*0.15)));
    else if (salary >= 1500)
        printf("Salary is %d\n", (int)(salary - (salary*0.05)));
    else if (salary >= 1000)
        printf("Salary is %d\n", salary + 200);
    else
        printf("Error");
        
    return 0;
}