// question 11 Employee Details

#include<stdio.h>

struct Employee{

    char FirstName[10];
    char LastName[10];
    double Salary;
};

void emp_init(struct Employee* e){

    printf("\nEnter First Name of employee: ");
    scanf("%s", &e->FirstName);

    printf("Enter Last Name of employee: ");
    scanf("%s", &e->LastName);

    printf("Enter Salary of employee: ");
    scanf("%lf", &e->Salary);

}

void set_salary(struct Employee *e){

    printf("\nSalary of %s %s being raised by 10 Percent.......", e->FirstName, e->LastName);
    e->Salary = e->Salary + (double)((0.1)*(e->Salary));
    printf("\n");
}

void emp_display(struct Employee *e){

    printf("\nFirst Name of the employee: %s", e->FirstName);
    printf("\nLast Name of the employee: %s", e->LastName);
    printf("\nSalary of the employee: %lf", e->Salary);
    printf("\n");

}

void main(){

    struct Employee e1;
    printf("\n ------ENTER EMPLOYEE-1 DETAILS------");
    emp_init(&e1);

    struct Employee e2;
    printf("\n ------ENTER EMPLOYEE-2 DETAILS------");
    emp_init(&e2);

    printf("\n ------ORIGINAL EMPLOYEE DETAILS------");
    emp_display(&e1);
    emp_display(&e2);

    printf("\n ------MODIFYING EMPLOYEE SALARY------");
    set_salary(&e1);
    set_salary(&e2);

    printf("\n ------UPDATED EMPLOYEE DETAILS------");
    emp_display(&e1);
    emp_display(&e2);

}
