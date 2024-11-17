#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} vector2D;


void main()
{
    // Create a two-dimensional vector using structures in C.
    vector2D pos = {69.00, 6.09};
    printf("%.2f %.2f", pos.x, pos.y);
}