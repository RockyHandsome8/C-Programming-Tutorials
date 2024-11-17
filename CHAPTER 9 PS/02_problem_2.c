#include <stdio.h>

typedef struct
{
    float x;
    float y;
} Vector2D;

Vector2D sumVector(Vector2D i, Vector2D j)
{
    Vector2D result = {(i.x + j.x), (i.y + j.y)};
    return result;
}

void main()
{
    // Write a function 'sumVector' which returns the sum of two vectors passed to it.
    // The vectors must be two—dimensional.

    Vector2D v1 = {3.0, 4.0};
    Vector2D v2 = {1.0, 2.0};

    Vector2D sum = sumVector(v1, v2);

    printf("Sum of (%.2f, %.2f) and (%.2f, %.2f) is (%.2f, %.2f)", v1.x, v1.y, v2.x, v2.y, sum.x, sum.y);
}