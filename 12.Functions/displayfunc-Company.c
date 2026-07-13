//displayfunction Program.
#include <stdio.h>

// Function to return the company name
char *companyName()
{
    return "Tranzyd Solutions Private Limited";
}

// Function to return the MD name
char *MdName()
{
    return "MD & CTO - Udaykumar Kathrivel";
}

// Function to return employee names
char *EmployeeName()
{
    return "1. Ganesh\n2. Angappan\n3. Harish";
}

// Function to return intern IDs
char *InternId()
{
    return "1. Arun-001\n2. Adi-002\n3. Sivasurya-003";
}

int main()
{
    printf("Company Name : %s\n", companyName());
    printf("MD Name      : %s\n", MdName());
    printf("\nEmployee List:\n%s\n", EmployeeName());
    printf("\nIntern IDs:\n%s\n", InternId());

    return 0;
}