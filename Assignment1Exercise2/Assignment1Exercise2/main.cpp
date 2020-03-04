//
//  main.cpp
//  Assignment1Exercise2
//
//  Created by Guadalupe Gonzalez on 2/4/20.
//  Copyright © 2020 Guadalupe Gonzalez. All rights reserved.
//

/*
 The formula for converting a temperature from Fahrenheit to Celsius is
 C = (5.0 / 9.0) * (F - 32)
 Write a function named celsius that accepts a Fahrenheit temperature as an argument. The function should return the temperature converted to Celsius.  Demonstrate the function by calling it in a loop that displays a table of Fahrenheit temperatures and their Celsius equivalents.
 
 
 */

#include <iostream>
#include <string>
using namespace std;

int celsius(int f)
{
    // TODO: Implement converstion formula

    int celsius = ((5.0/9.0) * (f-32)); //Question. How come it works with a double but not with an int? ex: I had it first like ((5/9) * (f-32)) but it wouldn't work. 
    return celsius;
    
}


int main()
{
    for (int f = 0; f <= 100; f++)
    {
        int c = 0;
        // TODO: Use celsius function to convert.
        c=celsius(f);
        cout << f << "F = " << c << "C" << endl;
    }

    // Keep this stuff at the end.
    cout << endl;
    system("pause");
    return 0;
}
