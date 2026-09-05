#include<stdio.h>
#include<string.h>

struct Student
{
    char name[100];
    int age;
    int roll_number;
    char department[100];
};

struct Teacher
{
    char name[100];
    int age;
    char subject[100];
    int teacher_id;
};

struct Admin
{
    char name[100];
    int age;
    int admin_id;
};

void school()
{
    printf("\n*** SURIYA INTERNATIONAL SCHOOL OF COMPUTER SCIENCE AND BUSINESS SYSTEMS ***\n");
}

void get_the_role(char role[])
{
    printf("\nWhat is your role in this learning portal: ");
    scanf("%99s",role);
}

int check_the_input(char role[])
{
    if(strcmp(role,"Student")==0 || strcmp(role,"student")==0)
    {
        printf("\nWelcome to the Student Space\n");
        return 1;
    }
    else if(strcmp(role,"Teacher")==0 || strcmp(role,"teacher")==0)
    {
        printf("\nWelcome to the Teacher Space\n");
        return 2;
    }
    else if(strcmp(role,"Admin")==0 || strcmp(role,"admin")==0)
    {
        printf("\nWelcome to the Administrative Panel\n");
        return 3;
    }
    else
    {
        printf("\nInvalid role!\n");
        return 0;
    }
}

void student_portal()
{
    struct Student s;
    char status[20];

    printf("\nAre you New or Old? ");
    scanf("%19s",status);

    if(strcmp(status,"New")==0 || strcmp(status,"new")==0)
    {
        printf("\n--- New Student Registration ---\n");

        printf("Enter your name: ");
        scanf("%99s",s.name);

        printf("Enter your age: ");
        scanf("%d",&s.age);

        printf("Enter your roll number: ");
        scanf("%d",&s.roll_number);

        printf("Enter your department: ");
        scanf("%99s",s.department);

        printf("\nStudent Registration Completed!\n");
        printf("Name          : %s\n",s.name);
        printf("Age           : %d\n",s.age);
        printf("Roll Number   : %d\n",s.roll_number);
        printf("Department    : %s\n",s.department);
    }
    else if(strcmp(status,"Old")==0 || strcmp(status,"old")==0)
    {
        printf("\nWelcome back, Student!\n");

        printf("Enter your roll number: ");
        scanf("%d",&s.roll_number);

        printf("Student with Roll Number %d selected.\n",s.roll_number);
    }
    else
    {
        printf("\nInvalid choice. Enter New or Old.\n");
    }
}

void teacher_portal()
{
    struct Teacher t;
    char status[20];

    printf("\nAre you New or Old? ");
    scanf("%19s",status);

    if(strcmp(status,"New")==0 || strcmp(status,"new")==0)
    {
        printf("\n--- New Teacher Registration ---\n");

        printf("Enter your name: ");
        scanf("%99s",t.name);

        printf("Enter your age: ");
        scanf("%d",&t.age);

        printf("Enter your subject: ");
        scanf("%99s",t.subject);

        printf("Enter your teacher ID: ");
        scanf("%d",&t.teacher_id);

        printf("\nTeacher Registration Completed!\n");
        printf("Name       : %s\n",t.name);
        printf("Age        : %d\n",t.age);
        printf("Subject    : %s\n",t.subject);
        printf("Teacher ID : %d\n",t.teacher_id);
    }
    else if(strcmp(status,"Old")==0 || strcmp(status,"old")==0)
    {
        printf("\nWelcome back, Teacher!\n");

        printf("Enter your Teacher ID: ");
        scanf("%d",&t.teacher_id);

        printf("Teacher ID %d selected.\n",t.teacher_id);
    }
    else
    {
        printf("\nInvalid choice. Enter New or Old.\n");
    }
}

void admin_portal()
{
    struct Admin a;
    char status[20];

    printf("\nAre you New or Old? ");
    scanf("%19s",status);

    if(strcmp(status,"New")==0 || strcmp(status,"new")==0)
    {
        printf("\n--- New Admin Registration ---\n");

        printf("Enter your name: ");
        scanf("%99s",a.name);

        printf("Enter your age: ");
        scanf("%d",&a.age);

        printf("Enter your Admin ID: ");
        scanf("%d",&a.admin_id);

        printf("\nAdmin Registration Completed!\n");
        printf("Name          : %s\n",a.name);
        printf("Age           : %d\n",a.age);
        printf("Admin ID      : %d\n",a.admin_id);
    }
    else if(strcmp(status,"Old")==0 || strcmp(status,"old")==0)
    {
        printf("\nWelcome back, Admin!\n");

        printf("Enter your Admin ID: ");
        scanf("%d",&a.admin_id);

        printf("Admin ID %d selected.\n",a.admin_id);
    }
    else
    {
        printf("\nInvalid choice. Enter New or Old.\n");
    }
}

int main()
{
    char role[100];
    int role_number;

    school();

    get_the_role(role);

    role_number=check_the_input(role);

    if(role_number==1)
    {
        student_portal();
    }
    else if(role_number==2)
    {
        teacher_portal();
    }
    else if(role_number==3)
    {
        admin_portal();
    }

    return 0;
}