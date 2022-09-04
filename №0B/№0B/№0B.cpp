// №0B.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void pointers(int* x, int* y, int* z)
{
    float min, max,a,b,c;

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
int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    cout << x << " " << y  << " " << z << endl;
    pointers(&x, &y, &z);
    cout << x << " " << y << " " << z << endl;


    cin >> x >> y >> z;

    cout << x << " " << y << " " << z << endl;
    link(x, y, z); 
    cout << x << " " << y << " " << z << endl;
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
