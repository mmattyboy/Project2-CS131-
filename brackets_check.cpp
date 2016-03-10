// brackets_check.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <cassert>
#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;


int main(int argc, char *argv[]) {
	string filename;
	if (argc >= 2) {
		filename = argv[1]; // command line arguments are given. The first argument is the filename
	}
	else {
		cout << "Enter name of file to check: ";
		cin >> filename;
	}
	cout << "File to check:" << filename << endl;

	ifstream infile(filename);
	if (!infile) {
		cout << "That file does not exist" << endl;
		return (-1); // end the program
	}

	string line;
	while (getline(infile, line)) {
		cout << line << endl;
	}
	infile.close();

	system("pause");
	return(0);
}

/*
Notes and observations before starting:
Refer to 5.1.7 for major major help with this project.
Use the #<stack> STL library, will make things a ton easier.
Run the Parentheses Matching in the while loop.
There should be four if statements.
IF there is a opening grouping character, push that into the stack.
ELIF there is a CLOSING grouping charcter(ONLY a closing, at the beginning)
	ex. }{()}
	THEN -> return invalid.
ELIF there is a wrong type.
	ex {()( })}
	Then -> return invalid.
IF the stack is empty
	return true (Meaning, there is no extra Parentheses in the stack.)
	Everything has been matched.
else
	return false. (Meaning, there is a extra parentheses or two in the stack. They weren't grouped.)
	
*/
