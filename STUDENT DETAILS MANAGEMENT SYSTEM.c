
#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float cutoff;
    char city[30];
    char dream[50];
};

int main()
{
    int n;

    printf("STUDENT DETAILS MANAGEMENT SYSTEM\n");
    printf("---------------------------------\n");

    printf("Enter the total number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Getting student details
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf(" %49[^\n]", s[i].name);

        printf("Cut-off Mark: ");
        scanf("%f", &s[i].cutoff);

        printf("City: ");
        scanf(" %29[^\n]", s[i].city);

        printf("Dream: ");
        scanf(" %49[^\n]", s[i].dream);
    }

    // Displaying student details
    printf("\n\nSTUDENT DETAILS\n");
    printf("---------------------------------\n");

    for (int i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", s[i].roll);
        printf("Name        : %s\n", s[i].name);
        printf("Cut-off Mark: %.2f\n", s[i].cutoff);
        printf("City        : %s\n", s[i].city);
        printf("Dream       : %s\n", s[i].dream);
    }

    return 0;
}
