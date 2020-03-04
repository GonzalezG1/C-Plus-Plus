//  Created by Guadalupe Gonzalez on 2/26/20.
//  Copyright © 2020 Guadalupe Gonzalez. All rights reserved.

// This program demonstrates the use of pointer variables
// It finds the area of a rectangle given length and width

#include <iostream>
using namespace std;

int main()
{
    int length; // holds length
    int width; // holds width
    int area; // holds area
    int *lengthPtr = nullptr; // int pointer which will be set to point to length
    int *widthPtr = nullptr; // int pointer which will be set to point to width

    cout << "Please input the length of the rectangle" << endl;
    cin >> length;

    cout << "Please input the width of the rectangle" << endl;
    cin >> width;

    lengthPtr= &length;

    widthPtr=&width;
    
    area = *lengthPtr * *widthPtr;
    
    cout << "The area is " << area << endl;
    
    if ( *lengthPtr > *widthPtr)
        cout << "The length is greater than the width" << endl;
    else if (*widthPtr > *lengthPtr)
        cout << "The width is greater than the length" << endl;
    else
        cout << "The width and length are the same" << endl;
    
    system("pause");
    return 0;
}
