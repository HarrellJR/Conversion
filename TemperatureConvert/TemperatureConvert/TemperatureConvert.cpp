// Jeremy Harrell
// ITSE1307
//Conversion from Celsius to Fahrenheit 
// I'm converting Celsius to Fahrenheit 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int celsius = 1;
	double Fahrenheit = 33.8; 
	float CONVERSION = celsius * Fahrenheit;

	cout << "Enter Celsius: " << endl; 
	cin >> celsius;

	cout << "Your total: " << celsius * Fahrenheit << endl;

    return 0;
}

