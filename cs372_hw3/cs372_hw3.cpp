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
using std::cout;
using std::endl;
using std::string;
string RomanTester(int);


string RomanTester(int n)
{
	string romanNum;


	if (n == 4)
	{
		romanNum = "IV";
		n -= 4;
	}

	else
	{
		for (int i = 1; i <= n; i++)
		{
			romanNum += "I";

		}
	}

	return romanNum;

}






int main()
{
	//assert(RomanTester(1) == "I");
	//assert(RomanTester(2) == "II");
	//assert(RomanTester(3) == "III");
	assert(RomanTester(4) == "IV");

	
	
	




















	system("pause");
	return 0;
}

