// Programming Challenge, Pizza Slices 

//  This program calculates the number of slices in a pizza.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    // Declare all the variables you will be using within this program

    float diameter, radius, area, pi;
    float slices;
    cout << "enter the diameter of the pizza";
    cin >> diameter;
    radius = diameter / 2;
    pi = 3.14;
    area = pi * (radius * radius);
    slices = area / 14.125;
    cout << "Cut this pizza into " << round(slices) << endl;
    return 0;
}

/* SAMPLE RUN RESULTS

Enter the pizza diameter (in inches): 14
Cut this pizza into 11 slices.
*/