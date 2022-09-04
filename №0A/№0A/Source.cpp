
#pragma once
#include "Header.h"
void square(int a, int b)
{
    int sq;
    if (b > 0)
        sq = a * b;
    else
        sq = a ^ 2;
    cout << "sq = " << sq;
}
