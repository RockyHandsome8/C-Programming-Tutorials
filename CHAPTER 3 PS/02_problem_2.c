/*
Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.
*/

#include <stdio.h>

int main()
{
    int total_marks, maths_marks, physics_marks, chemistry_marks; // Declaring variables for storing marks in each subject.

    printf("Enter marks in Math\n");
    scanf("%d", &maths_marks);
    printf("Enter marks in physics\n");
    scanf("%d", &physics_marks);
    printf("Enter marks in chemistry\n");
    scanf("%d", &chemistry_marks);
    
    total_marks = maths_marks + physics_marks + chemistry_marks; // Calculating total marks.
    if (maths_marks < 33 || physics_marks < 33 || chemistry_marks < 33){
        printf("Failed in individual subject(s).");
    }
    else if((total_marks/3) < 40){
        printf("Failed in overall percentage, i.e, %d%%.", ((total_marks/3)*100));
    }
    else{
        printf("Passed.");
    }
        return 0;
}