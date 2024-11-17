#include <stdio.h>

// Write a structure capable of storing date. 
// Write a function to compare those dates.

typedef struct
{
    int dd, mm, yy;
} date;

int compareDates(date date1, date date2) {
    if (date1.yy > date2.yy) {
        return 1;
    } else if (date1.yy < date2.yy) {
        return -1;
    }
    
    // Years are equal, compare months
    if (date1.mm > date2.mm) {
        return 1;
    } else if (date1.mm < date2.mm) {
        return -1;
    }
    
    // Years and months are equal, compare days
    if (date1.dd > date2.dd) {
        return 1;
    } else if (date1.dd < date2.dd) {
        return -1;
    }
    
    // All are equal
    return 0;
}

int main() {
    date date1 = {16, 11, 2024};
    date date2 = {17, 11, 2024};

    int result = compareDates(date1, date2);
    if (result == 0) {
        printf("The dates are the same.\n");
    } else if (result > 0) {
        printf("The first date is later.\n");
    } else {
        printf("The first date is earlier.\n");
    }
    
    return 0;
}