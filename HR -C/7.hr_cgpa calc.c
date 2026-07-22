#include <stdio.h>

int main()
{
    int subject;
    float marks[100], total = 0, cgpa;

    printf("Enter the number of subjects: ");
    scanf("%d", &subject);

    printf("Enter the grade points for each subject:\n");

    for (int i = 0; i < subject; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    cgpa = total / subject;

    printf("\nCGPA: %.2f\n", cgpa);

    return 0;
}