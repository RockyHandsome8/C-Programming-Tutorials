#include <stdio.h>

int main()
{
    /*
    Write a program to find grade of a student given his marks based on below:
        90-100 => A
        80-90 => B
        70-80 => C
        60-70 => D
        50-60 => E
        <50  => F
    */
   
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100)
    {
        printf("\nGrade is A.");
    }
    else if (marks >= 80 && marks <= 90)
    {
        printf("\nGrade is B.");
    }
    else if (marks >= 70 && marks <= 80)
    {
        printf("\nGrade is C.");
    }
    else if (marks >= 60 && marks <= 70)
    {
        printf("\nGrade is D.");
    }
    else if (marks >= 50 && marks <= 60)
    {
        printf("\nGrade is E.");
    }
    else if (marks < 50)
    {
        printf("\nGrade is F.");
    }

    return 0;
}