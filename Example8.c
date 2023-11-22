#include <stdio.h>
#include <stdlib.h>

typedef struct Employee
{
    int employeeID;
    int salary;
} Employee;

Employee *creatEmployees(int size)
{
    Employee *employees = calloc(size, sizeof(Employee));
    Employee emp1 = {.employeeID = 0, .salary = 100};
    Employee emp2 = {.employeeID = 1, .salary = 200};
    Employee emp3 = {.employeeID = 2, .salary = 300};

    employees[0] = emp1;
    employees[1] = emp2;
    employees[2] = emp3;

    return employees;
}

int main()
{
    Employee *employees = creatEmployees(3);
    for (int i = 0; i < 3; i++)
    {
        printf("Id of %d. employee is : %d\n", i + 1, employees[i].employeeID);
        printf("Salaray of %d. employee is : %d\n", i + 1, employees[i].salary);
        printf("\n");
    }

    return 0;
}