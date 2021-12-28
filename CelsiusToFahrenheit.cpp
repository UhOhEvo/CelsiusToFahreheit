// HEADER
/*Student Name: Thomas Sanger
Lab Assignment: LAB3_2
Project Name: Celsius To Fahrenheit
File Name: CelsiusToFahrenheit.cpp
Description: Converts user input Celsius temperature to degrees Fahrenheit
Limitations or issues: (describe any known defects/deficiencies in this particular file)
Credits: (identify the source of any code obtained from another student or the internet)
*/

// Preprocessor directive placed here
#include <iostream>
using namespace std;

// Function prototypes placed here

// External variable declarations placed here

// Global variable declarations placed here

// Global constants declarations placed here

int main()
{

	// Local variable declarations placed here
	double celsius;
	double fahrenheit;

	// Inform user what program does
	cout << "This program converts degrees in Celsius to degrees in Fahrenheit.\n" << endl;

	// Ask user for degrees Celsius
	cout << "Enter the temperature in Celsius that you wish to convert: ";
	cin >> celsius;

	// Calculation
	fahrenheit = (9.0 / 5.0) * celsius + 32;

	// Display the conversion
	cout << celsius << " degrees Celsius is equal to " << fahrenheit << " degrees Fahrenheit.\n";

	// This line of code holds the VC++ Console windowcout << "Press any key to end this application" << endl;
	system("pause");

	// instructor pause

	// Returns a value to the calling programreturn(0);

}


// PROOF
// Program output copied into the below comment section
/*
PROOF 1
This program converts degrees in Celsius to degrees in Fahrenheit.

Enter the temperature in Celsius that you wish to convert: 100
100 degrees Celsius is equal to 212 degrees Fahrenheit.
Press any key to continue . . .

PROOF 2
This program converts degrees in Celsius to degrees in Fahrenheit.

Enter the temperature in Celsius that you wish to convert: 0
0 degrees Celsius is equal to 32 degrees Fahrenheit.
Press any key to continue . . .

PROOF 3
This program converts degrees in Celsius to degrees in Fahrenheit.

Enter the temperature in Celsius that you wish to convert: -40
-40 degrees Celsius is equal to -40 degrees Fahrenheit.
Press any key to continue . . .
*/