#include "encrypt.h"
#include <iostream>
#include <cstdio>
#include <cstring>
#include <fstream>
using namespace std;
int main(int argc, char *argv[])
{
	if(argc == 1)
	{
		char getCharFromScream;
		string stream = "";
		// Input form the screan
		while(cin >> getCharFromScream)
		{
			stream.push_back(getCharFromScream);
		}
		// Output on the Scream
		encrypt fooEncrypt;
		fooEncrypt.updatePlainText(stream);
		cout << fooEncrypt.getCipherText() << endl;
	}
	else
	{
		for(int i = 1; i < argc; i++)
		{
			char getCharFromScream;
			string stream = "";
			// Set the IO Stream 
			ifstream fin(argv[i]);
			while(fin >> getCharFromScream)
			{
				stream.push_back(getCharFromScream);
			}
			// Output on the Scream
			encrypt fooEncrypt;
			fooEncrypt.updatePlainText(stream);
			cout << fooEncrypt.getCipherText() << endl;
		}
	}
	return 0;
}
