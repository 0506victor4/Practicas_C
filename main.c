#include <stdio.h>

// Description: Develop a program in which you enter the salary of 10 employees and then obtain the net salary

int main(void) {
    float salaries[10];
    float total = 0;

    for (int x = 0; x < 10; x++) {
        printf("Enter the salary of employee number %d: ", x + 1);
        scanf("%f", &salaries[x]);
        total += salaries[x]; 
    }
  
    printf("The total salary of all employees is: %.2f\n", total);
  
    return 0;
}