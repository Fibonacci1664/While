/*
 * While.cpp
 *
 *  Created on: 28 May 2019
 *      Author: Dave
 */

#include<iostream>

using namespace std;

int main()
{
	int counter = 0;

	while(counter < 5)
	{
		cout << "This is a counter, and this is number: " << (counter + 1) << endl;

		counter ++;
	}

	cout << "Program exiting..." << endl;

	return 0;
}


