// Eric Pelto
// 28 February 2014
// CS 372 HW 3
// Testing out TDD kata for roman numerals


#include <stdio.h>
#include <assert.h>
#include "stdafx.h"
#include <iostream>
#include <string> 
using std::cout;
using std::endl;
using std::string;
void onetwothree();
string ConvertRomanNumerals(int);
void yes();


void onetwothree()
{
	if (ConvertRomanNumerals(1) == "I" && ConvertRomanNumerals(2) == "II" && ConvertRomanNumerals(3) == "III")
	{
		cout << "All test's sussesful" << endl;

	}


}



string ConvertRomanNumerals(int n)
{
	string romanNum;
	if (n == 1)
	{
		romanNum = "I";
	}
	else if (n == 2)
	{
		romanNum = "II";
	}
	else if (n == 3) 
	{
		romanNum = "III";
	}



	return romanNum;

}


int main()
{

	onetwothree();





















	system("pause");
	return 0;
}

