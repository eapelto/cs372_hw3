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
void onetwothree(int);
string ConvertRomanNumerals(int);
void CheckIfCorrect(bool);


void onetwothree(int n)
{
	bool working = true;
	string correctRomanNum = "I";


	//Loop from 1 to 3 checking if the roman numerals are correct.
	for (int i = 1; i <= n; i++)
	{
		
		if (ConvertRomanNumerals(i) == correctRomanNum)
		{
			cout << "Test Roman Numeral: " << i << " is " << correctRomanNum << endl;
		}

		else
		{
			working = false;
			cout << "wrong romanNumeral" << endl;
		}

		correctRomanNum += "I";

	}

	CheckIfCorrect(working);



}




void CheckIfCorrect(bool b)
{

	//Checking if all the tests were successfull
	if (b)
	{
		cout << "All tests successfull!" << endl;
	}
	else
	{
		cout << "Test not successfull" << endl;
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

	onetwothree(3);





















	system("pause");
	return 0;
}

