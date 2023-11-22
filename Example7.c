#include <stdio.h>
#include <stdlib.h>

typedef struct Employee
{
    int employeeID;
    int salary;
} Employee;

int calculateTotalSalary(Employee *employees, int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += employees[i].salary;
    }
    return total;
}

int main()
{
    Employee emp1 = {.employeeID = 0, .salary = 100};
    Employee emp2 = {.employeeID = 1, .salary = 200};
    Employee emp3 = {.employeeID = 2, .salary = 300};

    Employee *employees = calloc(3, sizeof(Employee));
    employees[0] = emp1;
    employees[1] = emp2;
    employees[2] = emp3;

    printf("%d", calculateTotalSalary(employees, 3));
    return 0;
}