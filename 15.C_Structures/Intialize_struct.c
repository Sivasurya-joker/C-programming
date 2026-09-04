#include <stdio.h>

// Defining a structure to represent a student
struct Student
{
    char name[50];
    int age;
    float grade;
};

int main()
{
    
    struct Student s1 = {"Sivasurya", 20, 1.00};

    struct Student s2 = {.age = 22, .name = "Sureshkumar", .grade = 2.00};

    
    printf("%s\t%d\t%.2f\n", s1.name, s1.age, s1.grade);
    printf("%s\t%d\t%.2f\n", s2.name, s2.age, s2.grade);

    return 0;
}