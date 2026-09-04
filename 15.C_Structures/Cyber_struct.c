#include <stdio.h>

struct Cyber_student_information
{
    int rollnumber;
    int registernumber;
    int year;
    int semester;

    char name[200];
    char dob[11];
    char college[100];
    char degree[100];
    char branch[100];
    char bio[100];
    char skills[2000];

    float cgpa;
};

int main()
{
    int n;

    printf("Enter the Number of Students for Cybersecurity: ");
    scanf("%d", &n);

    struct Cyber_student_information student[n];

    // Input
    for (int i = 0; i < n; i++)
    {
        printf("\n--- Student %d ---\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &student[i].rollnumber);

        printf("Enter Register Number: ");
        scanf("%d", &student[i].registernumber);

        printf("Enter Year: ");
        scanf("%d", &student[i].year);

        printf("Enter Semester: ");
        scanf("%d", &student[i].semester);

        printf("Enter Name: ");
        scanf(" %[^\n]", student[i].name);

        printf("Enter DOB: ");
        scanf("%10s", student[i].dob);

        printf("Enter College: ");
        scanf(" %[^\n]", student[i].college);

        printf("Enter Degree: ");
        scanf(" %[^\n]", student[i].degree);

        printf("Enter Branch: ");
        scanf(" %[^\n]", student[i].branch);

        printf("Enter Bio: ");
        scanf(" %[^\n]", student[i].bio);

        printf("Enter Skills: ");
        scanf(" %[^\n]", student[i].skills);

        printf("Enter CGPA: ");
        scanf("%f", &student[i].cgpa);
    }

    // Output
    printf("\n*************** CYBER SECURITY - ROOTUSER'S ***************\n");

    for (int i = 0; i < n; i++)
    {
        printf("\n--- Student %d ---\n", i + 1);

        printf("Roll Number    : %d\n", student[i].rollnumber);
        printf("Register Number: %d\n", student[i].registernumber);
        printf("Year           : %d\n", student[i].year);
        printf("Semester       : %d\n", student[i].semester);
        printf("Name           : %s\n", student[i].name);
        printf("DOB            : %s\n", student[i].dob);
        printf("College        : %s\n", student[i].college);
        printf("Degree         : %s\n", student[i].degree);
        printf("Branch         : %s\n", student[i].branch);
        printf("Bio            : %s\n", student[i].bio);
        printf("Skills         : %s\n", student[i].skills);
        printf("CGPA           : %.2f\n", student[i].cgpa);
    }

    return 0;
}