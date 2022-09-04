#include "Header.h"

void pointers(int* x, int* y, int* z)
{
    float min, max, a, b, c;

    min = *x;

    if (min > *y)
        min = *y;

    if (min > *z)
        min = *z;


    max = *x;

    if (max < *y)
        max = *y;

    if (max < *z)
        max = *z;


    a = *x;
    b = *y;
    c = *z;

    if (min == *x)
        *x = max;
    else  if (min == *y)
        *y = max;
    else  if (min == *z)
        *z = max;

    if (max == a)
        *x = min;
    else  if (max == b)
        *y = min;
    else  if (max == c)
        *z = min;

}
void link(int& x, int& y, int& z)
{
    float min, max, a, b, c;

    min = x;

    if (min > y)
        min = y;

    if (min > z)
        min = z;


    max = x;

    if (max < y)
        max = y;

    if (max < z)
        max = z;


    a = x;
    b = y;
    c = z;

    if (min == x)
        x = max;
    else  if (min == y)
        y = max;
    else  if (min == z)
        z = max;

    if (max == a)
        x = min;
    else  if (max == b)
        y = min;
    else  if (max == c)
        z = min;

}