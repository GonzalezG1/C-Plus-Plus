/*
Guadalupe Gonzalez
Assignment 2 Exercise 2
Rainfall statistics
Write a program that lets the user enter the total rainfall for each of 12 months into an array of doubles.
The program should calculate and display the total rainfall for the year,
the average monthly rainfall, and the months with the highest and lowest amounts.
DOES NOT ACCEPT NEGATIVE VALUES
*/

#include <iostream>
#include <string>
using namespace std;


int main()
{
const int SIZE = 12;
double rainfall[SIZE];

    string Name_of_Month[SIZE] = {"January", "February", "March", "April","May","June", "July", "August", "September","October", "November", "December" };
    
cout << "You are about to enter rainfall for each of the 12 months"<<endl;
    
for(int i = 0; i < SIZE; i++)
{
    do{
    cout << "Enter the rainfall for " << Name_of_Month[i] <<": " ;
    
    cin >> rainfall[i];
    }
    while(rainfall[i] < 0);
    
//does not accept negative numbers!! :D
}

//calculate the total rainfall of the year
double total = 0;
for (int i = 0; i < SIZE; i++)
{
//add every element to a value
total += rainfall[i];

}
//now divide by 12
double result = total / 12;
cout << "The average monthly rainfall: " << result << endl;
    
//Average found and displayed -- DONE

//attemp 1: using parallel arrays with string and int


int Number_of_Month[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

    
 //finding the highest rainfall in the year
    
int highest = rainfall[0];
int index=0;
    
for (int i = 0; i < SIZE; i++)
{
    if (highest < rainfall[i])
    {
        highest = rainfall[i];
        index=i;
    }
}
    cout << "The  month with the highest amount is: " << Name_of_Month[index] <<" with rainfall of: " << highest << endl;
    

//finding the lowest rainfall in the year
    
int lowest = rainfall[0];
    string month="";
    int index2=0;
for (int i = 0; i < SIZE; i++)
{
    if (lowest > rainfall[i])
    {
        lowest = rainfall[i];
        index2=i;
    }
}
cout << "The month with the lowest amount is: " << Name_of_Month[index2] << " with rainfall of: " <<lowest << endl;

}
