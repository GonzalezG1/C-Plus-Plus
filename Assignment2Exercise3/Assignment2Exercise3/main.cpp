//
//  main.cpp
//  Assignment2Exercise3
//
//  Created by Guadalupe Gonzalez on 2/14/20.
//  Copyright © 2020 Guadalupe Gonzalez. All rights reserved.
//
/*
 Write a program that lets a maker of chips and salsa keep track of sales for five different types of salsa: mild, medium, sweet, hot, and zesty. The program should use two parallel 5-element arrays: an array of strings that holds the five salsa names and an array of integers that holds the number of jars sold during the past month for each salsa type. The salsa names should be stored using an initialization list at the time the name array is created. The program should prompt the user to enter the number of jars sold for each type. Once this sales data has been entered, the program should produce a report that displays sales for each salsa type, total sales, and the names of the highest selling and lowest selling products.

 Input Validation: Do not accept negative values for number of jars sold.
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int SIZE=5;
    
    string salsas[SIZE] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    
    int num_jars_sold[SIZE];
    
    for(int i=0;i<SIZE;i++)
    {
        do{
            cout<< "Enter of jars sold for " << salsas[i] <<": ";
            cin>> num_jars_sold[i];
        }
        while(num_jars_sold[i] <0);
        //should not accept megative numbers at this point! --DONE
    }
    cout<<"Here is a report of the 5 salsas and their total sales: "<<endl;
    for(int i=0;i<SIZE;i++)
    {
        
        cout<< salsas[i] << ": " << num_jars_sold[i] << " jars sold."<<endl;
    }
    int highest=num_jars_sold[0];
    int lowest=num_jars_sold[0];
    int index=0;
    int index2=0;
    for(int i=0;i<SIZE;i++)
    {
        if (highest < num_jars_sold[i])
        {
            highest=num_jars_sold[i];
            index=i;
        }
        
    }
    for(int i=0;i<SIZE;i++)
    {
        
        if(lowest> num_jars_sold[i])
        {
            lowest=num_jars_sold[i];
            index2=i;
        }
    }
    cout<< "The highest selling product is: "<< salsas[index]<<endl;
    cout<<"The lowest selling product is: "<<salsas[index2]<<endl;
    // Keep this stuff at the end.
    cout << endl;
    system("pause");
    return 0;

}
