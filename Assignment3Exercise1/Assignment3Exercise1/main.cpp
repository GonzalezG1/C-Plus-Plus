//
//  main.cpp
//  Assignment3Exercise1
//
//  Created by Guadalupe Gonzalez on 2/18/20.
//  Copyright © 2020 Guadalupe Gonzalez. All rights reserved.
//
/*
 A lottery ticket buyer purchases 10 tickets a week, always playing the same 10 5-digit "lucky" combinations. Write a program that initializes an array with five-digit numbers and then lets the player enter this week’s winning 5-digit number.

 The program should perform a linear search through the list of the player’s numbers and report whether or not one of the tickets is a winner this week.

 The program should perform the following steps:
 1. Create an array of ten five-digit numbers. (Range of 10000 to 99999.)
 2. Prompt user for the winning ticket number.
 3. Search the array to see if winning ticket was found.
 4. If matching ticket found, congratulate user for winning.
 5. Else, apologize to user for losing.
 */

#include <iostream>
#include <string>
#include <vector>
#include<ctime>
using namespace std;


//from professor's notes
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int binarySearch(int numbers[], int size, int key)
{
    int min = 0;
    int max = size - 1;

    while (min <= max)
    {
        int mid = (min + max) / 2;
        if (numbers[mid] == key)
            return mid;
        else if (numbers[mid] > key)
            max = mid - 1;
        else
            min = mid + 1;
    }

    return -1;
}
void bubblesort(int numbers[], int size)
{
    for (int pass = 0; pass < size - 1; pass++)
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (numbers[i] > numbers[i + 1])
                swap(numbers[i], numbers[i + 1]);
        }
    }
}

void generateData(int numbers[], int size)
{
    //srand(time(0)); // "seed the random number generator"
    for (int i=0;i<10;i++)
    {
        numbers[i] = 10000 + rand () % 90000;
    }
     
  
}
void display(int numbers[], int size)
{
    for (int i = 0; i < size; i++)
        cout << numbers[i] << " ";
    cout << endl;
}
int main() {
 
    const int array_SIZE=10;
    int tickets[array_SIZE];
    
    int winning_ticket;
    generateData(tickets, array_SIZE);
    cout<<"unsorted: ";
   display(tickets, array_SIZE);
    
    //sorted
    bubblesort(tickets, array_SIZE);
    cout<<"\n sorted: ";
    display(tickets, array_SIZE);
    //prompting user
    
    cout<<"Enter the 5 digit number: ";
    cin>>winning_ticket;
    
    int index=binarySearch(tickets, array_SIZE, winning_ticket);
    
    if (index == -1)
        cout << "I am sorry. You have lost. " << endl;
    
    else
        cout << "Congrats! You have won!!!"<<endl;

    

    
    system("pause");
    
    
}
