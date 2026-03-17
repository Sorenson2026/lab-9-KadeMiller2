//Kade Miller, 3/17/26, Lab 9
//This program reads off names in a given file and outputs which names are first and last alphabetically, and how many names are in the file. 
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//This function reads off names in a given file and outputs which names are first and last alphabetically, and how many names are in the file. 
int main()
{
	//create variables and initialize what needs to be
	string names, fileName, first = "z", last = "A";
	int count = 0;
	ifstream inFile;

	//Greeting
	cout << "This program reads off names in a given file and outputs which names are first and last alphabetically, and how many names are in the file. The file must contain one name per line." << endl;

	//prompt user for file name
	cout << "Enter the name of the file (must include file type): ";
	cin >> fileName;

	//open inFile
	inFile.open(fileName);

	//check to see if file name input by user exists
	if (inFile)
	{
		//if file name exists, do the whole program
		//create loop that reads names
		while (inFile >> names)
		{
			//I think this should assign whatever is input from the file in the condition statement
			names = names;

			//create an if statement to find first and last ranked alphabetical names
			if (names <= first)
				first = names;
			else if (names >= last)
				last = names;

			//output name from file
			cout << names << endl;

			//increment count
			count += 1;
		}

		//Output number of names, first and last alphabetical name
		cout << "First alphabetical name is: " << first << endl;
		cout << "Last alphabetical name is: " << last << endl;
		cout << "Number of names in file is: " << count << endl;
	}
	else
		//if file name doesn’t exist, output message saying so
		cout << "There was an error opening " << fileName << "please close the program and try again";

	return 0;
}
