//
//  main.cpp
//  Assingment1Exercise1
//
//  Created by Guadalupe Gonzalez on 2/4/20.
//  Copyright © 2020 Guadalupe Gonzalez. All rights reserved.
//

/*
 Write a program that determines which of a company's four divisions (Northeast, Southeast, Northwest, and Southwest)
had the greatest sales for a quarter. It should include the following two functions, which are called by main.
-double getSales() is passed the name of a division.  It asks the user for a division's quarterly sales figure, validates the input, then returns it. It should be called once for each division.
-void findHighest() is passed the four sales totals. It determines which is the largest and prints the name of the high grossing division, along with its sales figure.
*/

#include <iostream>
#include <string>
using namespace std;

double getSales(string division)
{
double sales = 0;
    
// Prompt for division's sales
cout << "Division sales : ";
cin >> sales;
// if sales < 0
        
if (sales<0.0) // ********* need to fix this!!!!!
{
cout << "Error. You entered a negative number. Sales is set to 0." << endl;
sales = 0.0;
// report error
// set sales to 0
}

return sales;
}

void findHighest(double nwSales, double neSales, double swSales, double seSales)
{
string highDivision = "Northwest";
double highSales = nwSales; //assumption that northwest is the highest. Could change!! **** need to compare to other sales

if (neSales > highSales)
{
highDivision = "Northeast";
highSales = neSales;
}

// TODO: continue this logic for Southwest and Southeast.
if(swSales > highSales)
{
    highDivision="SouthWest";
    highSales=swSales;
}
if(seSales > highSales)
{
    highDivision="SouthEast";
    highSales=seSales;
}



// TODO: Display name and sales of winning division.
    cout << "The winning division is " << highDivision<< " with " << highSales << " sales" << endl;
}

int main()
{
// Declare four variables, one for each division
double nw; // Northwest sales figures
double ne; //northeast sales figures
double sw; //southwest sales figures
double se; //southeast sales figures

// Get sales figures for all four divisions.
nw = getSales("Northwest");
ne=getSales("Northeast");
sw=getSales("Northwest");
se=getSales("Northeast");

// Call findHighest to determine the winner
findHighest(nw, ne, sw, se);
    

// Keep this stuff at the end.
cout << endl;
system("pause");
return 0;
}
