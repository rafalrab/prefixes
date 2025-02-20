
#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <array>
#include <list>
using namespace std;

int main(int argc, char *argv[])
{
	int index = 0; 
	list<string> words;
	string word = " ";
	string inputFilePath = argv[1];
	string outputFile = argv[2];
	int maxPrefixLength = atoi(argv[3]);
	string sortingOrder = argv[4];

	// ------ odczyt
	fstream file; 
	
	file.open(inputFilePath); 

	if (file.is_open()) {
		while (!file.eof()) {
			getline(file, word, ' ');
			words.push_back(word);
			index++;
		}
		file.close();
	}
	else cout << "Unable to open file" << endl;

	list<string> prefixes;

	for (list<string>::iterator it = words.begin(); it != words.end(); ++it)
	{
		for (int j = 1; j <= maxPrefixLength; j++)
		{
			prefixes.push_back(((string)*it).substr(0, j));
		}
	}

	if (sortingOrder == "desc") 
	{
		prefixes.sort(greater<string>());
	}
	else
	{
		prefixes.sort();
	}

	prefixes.unique();


	//-------------- zapis
	ofstream output(outputFile);
	
	for (list<string>::iterator i = prefixes.begin(); i != prefixes.end(); ++i)
	{
		output << *i << endl;
	}

	output.close();

	system("Pause");
}



