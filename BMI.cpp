/*
Program: BMI.cpp
Author: Robert Payne
Lab Section: ITCS1212-L15
Date: 2/1/2012
Purpose:    This program prompts the user to enter his/her
            height and weight. The program uses this data
            to calculate and print the user's body mass index
*/

#include<iostream>
using namespace std;

int main()
{
    double feetHeight; //user enters total feet
    double inchHeight; //user enters inches above feet
    double heightInInches; //the total height in inches
    double weightInPounds; //user enters weight
    double bodyMassIndex; //to be calculated

    //prompt the user for input and reads input
    cout << "You will be prompted to enter your height in feet "
        << "and inches.\n";
    cout << "Enter how many feet tall you are: ";
    cin >> feetHeight;
    cout << "Now enter how many inches you are above that feet "
        << "height: ";
    cin >> inchHeight;
    cout << "Enter you weight as a decimal number: ";
    cin >> weightInPounds;

    //calculate the total height in inches
    heightInInches = (feetHeight * 12) + inchHeight;

    //calculate the body mass index
    bodyMassIndex = (weightInPounds * 703) / (heightInInches * heightInInches);

    //print the results
    cout << "Your BMI is " << bodyMassIndex << endl;

    return 0;
}
