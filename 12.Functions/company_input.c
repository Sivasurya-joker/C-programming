#include <stdio.h>

void getDetails()
{
    char Companyname[100];
    char Mdname[100];
    char EmployeeName[100];
    char internName[100];

    printf("Enter the company name: ");
    scanf(" %99[^\n]", Companyname);

    printf("Enter the MD name: ");
    scanf(" %99[^\n]", Mdname);

    printf("Enter employee name: ");
    scanf(" %99[^\n]", EmployeeName);

    printf("Enter Internname: ");
    scanf(" %99[^\n]", internName);

    printf("\n========== COMPANY PORTFOLIO ==========\n");
    printf("Company Name  : %s\n", Companyname);
    printf("MD Name       : %s\n", Mdname);
    printf("Employee Name : %s\n", EmployeeName);
    printf("Intern name   : %s\n", internName);
}

int main()
{
    getDetails();
    return 0;
}
