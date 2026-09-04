#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Welcome()
{
    printf("\n====================================================================\n");
    printf("                 Welcome To Central Bank of India\n");
    printf("====================================================================\n");
}

void ask_customer()
{
    printf("\nHow may I help you?\n");
}

void customer()
{
    printf("I want to create an account in your bank.\n");
}

int check_the_age()
{
    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are eligible to open a major account.\n");
    }
    else
    {
        printf("You are eligible to open a minor account or a joint account with your parent.\n");
    }

    return age;
}

void check_the_age_and_create_an_account(int age)
{
    char name[100];
    char contact[20];
    char aadharno[20];
    char address[200];

    printf("\nEnter your name: ");
    scanf(" %99[^\n]", name);

    printf("Enter your contact number: ");
    scanf(" %19s", contact);

    printf("Enter your Aadhar number: ");
    scanf(" %19s", aadharno);

    printf("Enter your address: ");
    scanf(" %199[^\n]", address);

    printf("\n================ CUSTOMER DETAILS ================\n");
    printf("Name          : %s\n", name);
    printf("Contact       : %s\n", contact);
    printf("Aadhar Number : %s\n", aadharno);
    printf("Address       : %s\n", address);
    printf("===================================================\n");

    if (age >= 18)
    {
        printf("\nYour Major account is created successfully.\n");
    }
    else
    {
        printf("\nYour Minor account is created successfully.\n");
        printf("Your parents will have control over the account.\n");
    }

    printf("Your ATM debit card will be delivered through postal service.\n");
}

void request_for_deposit(int age)
{
    if (age >= 18)
    {
        printf("\nYou are requested to deposit Rs.1000 as the minimum balance.\n");
    }
    else
    {
        printf("\nMinimum deposit requirement will depend on the minor account type.\n");
    }
}

void get_the_debitcard()
{
    printf("\nYour ATM debit card will be delivered to your registered address.\n");
}

int main()
{
    int age;

    Welcome();

    ask_customer();

    customer();

    age = check_the_age();

    check_the_age_and_create_an_account(age);

    request_for_deposit(age);

    get_the_debitcard();

    printf("\nThank you for choosing Central Bank of India.\n");

    return 0;
}