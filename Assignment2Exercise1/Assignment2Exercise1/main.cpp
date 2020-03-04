/*
Guadalupe Gonzalez
Assignment 2 Exercise 1

Write a program that lets the user enter 10 values into an array. The program should then display the largest and smallest values stored in the array.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
const int SIZE = 10;
int Numbers_Entered[SIZE];
cout << "You are about to enter 10 numbers. \n";
for (int i = 0; i < SIZE; i++)
{
cout << "Enter number " << i+1 << ": ";
cin >> Numbers_Entered[i];

}

//finding highest value in an array based on the book/powerpoint
int highest = Numbers_Entered[0];
for (int i = 0; i < SIZE; i++)
{
if (Numbers_Entered[i] > highest)
highest = Numbers_Entered[i];
}
cout << "The highest value in the array is: " << highest << endl;;

//finding the smallest value in an array based on the book/powerpoint notes
int smallest = Numbers_Entered[0];
for (int i = 0; i < SIZE; i++)
{
if (Numbers_Entered[i] < smallest)
smallest = Numbers_Entered[i];
}
cout << "The smallest value in the array is: " << smallest;


// Keep this stuff at the end.
cout << endl;
system("pause");
return 0;

}
