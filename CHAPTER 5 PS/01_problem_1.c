#include <stdio.h>
    
int avg(int a, int b, int c){
    printf("The average is %d\n", (a+b+c)/3);
}

int main()
{
    // WAP using function to find the average of three numbers.
    avg(1, 2, 3);
    avg(1, 2, 9);
    avg(1, 5, 3);
    
    return 0;
}