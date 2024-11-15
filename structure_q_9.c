#include <stdio.h>

typedef struct
{
    char name[50];
    int roll_no;
    int marks_p, marks_c, marks_m, total_marks;
} Students;

void sort_students(Students students[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (students[j].total_marks < students[j + 1].total_marks)
            {
                Students temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    Students students[n]; // Declare the array after n is initialized

    for (int i = 0; i < n; i++)
    {
        printf("Enter the details for student %d: ", i + 1);

        printf("\nName: ");
        scanf("%s", students[i].name);

        printf("Roll No.: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks in Physics (out of 100): ");
        scanf("%d", &students[i].marks_p);

        printf("Marks in Chemistry (out of 100): ");
        scanf("%d", &students[i].marks_c);

        printf("Marks in Mathematics (out of 100): ");
        scanf("%d", &students[i].marks_m);

        students[i].total_marks = students[i].marks_p + students[i].marks_c + students[i].marks_m;
    }

    sort_students(students, n);

    printf("\nMerit List!");

    printf("\nRank\tName\tRoll No.\tTotal Marks\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\t%d\n", i + 1, students[i].name, students[i].roll_no, students[i].total_marks);
    }

    return 0; // Return statement for main function
}
