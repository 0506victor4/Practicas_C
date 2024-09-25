#include <stdio.h>

//Description : Develop a program in which you enter the salary of 10 employees and then obtain the net salary

int main(void) {

float salaries[10];
float total = 0;

  for (int x = 0; x<=10; x++){
printf("Enter salarie of the employee : "x+1);
scanf("%f",&salaries[x]);
  }

  

  

  return 0;
}