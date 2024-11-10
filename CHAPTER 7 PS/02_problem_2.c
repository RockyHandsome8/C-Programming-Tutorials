#include <stdio.h>
    
void main()
{
    /*
    If s[3] is a 1-D array of integers then *(s+3) refers to the
    third element:
        (i)   True.
        (ii)  False.
        (iii) Depends.
    */

   int s[3] = {2, 45, 3};
   printf("%d", *(s+3));
   
}