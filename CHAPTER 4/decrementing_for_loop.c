#include <stdio.h>

int main()
{
    for (int i = 5; i; i--) // Second argument me i ka matlab hai ki jabtak i non-zero hai tabtak condition true hai
    {
        printf("%d\n", i); // Prints i until it becomes zero
        // In C, if something is written as it is like 'i' then it is considered true
    }

    return 0;
}