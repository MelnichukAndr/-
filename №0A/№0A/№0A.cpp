// №0A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Header.h"


int main()
{
    int s=0, r=0;

    cout << "Enter the side of the square" << endl;
    cout << "If you want to calculate the area of a rectangle enter 0" << endl;
    cin >> s;
    if (s > 0)
        square(s);
    if (s == 0)
    {
        cout << "Enter the sides of the rectangle" << endl;
        cin >> s >> r;
        square(s,r);
    }
    else if (s < 0 || r < 0)
        cout << "Error:" << "Side cannot be equal to or less than 0";
    
  
}

