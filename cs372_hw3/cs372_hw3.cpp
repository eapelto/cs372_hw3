// Eric Pelto
// 28 February 2014
// CS 372 HW 3
// Testing out TDD kata for roman numerals


#include <stdio.h>
#include <assert.h>
#include <crtdbg.h>
#include "stdafx.h"
#include <iostream>
#include <string> 
#include <cassert>
#include <vector>
using std::vector;
using std::cout;
using std::endl;
using std::string;
string RomanTester(int);


vector<int> VALUES = { 9, 5, 4, 1 };
vector<string> SYMBOLS = { "IX", "V", "IV", "I" };

string RomanTester(int n)
{
	string romanNum;

	for (int i = 0; i < VALUES.size(); i++)
	{
		if (n >= VALUES[i])
		{
			cout << n << endl;
			romanNum = SYMBOLS[i];
			n -= VALUES[i];
			cout << n << endl;
			break;
		}
	}

	cout << romanNum << endl;
	//if no I's need to be put on then don't other wise loop threw the right amount of I's.
	if (n != 0)
	{

		for (int i = 0; i < n; i++)
		{
			romanNum += "I";

		}
	}

	cout << romanNum << endl;

	return romanNum;

}







int main()
{
	//assert(RomanTester(1) == "I");
	//assert(RomanTester(2) == "II");
	//assert(RomanTester(3) == "III");
	//assert(RomanTester(4) == "IV");
	//assert(RomanTester(5) == "V");
	//assert(RomanTester(6) == "VI");
	//assert(RomanTester(7) == "VII");
	//assert(RomanTester(8) == "VIII");
	assert(RomanTester(9) == "IX");
	
	
	




















	system("pause");
	return 0;
}

