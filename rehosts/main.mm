// #include "stdafx.h"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main(int argv, char** args)
{
	fstream source, output;
	if (argv == 3) {
		source.open(args[1], fstream::in);
		output.open(args[2], fstream::out);
	} else {
		source.open("hosts", fstream::in);
		output.open("hostsCleaned", fstream::out);
	}
	string tmp;
	while (!source.eof())
	{
		getline(source, tmp);
		if ((tmp[0] != '#') && (!tmp.empty()) && (tmp[0] != '-'))
		{
			output << tmp.substr(0, tmp.find_first_of('#')-1) << endl;
		}
	}
	source.close();
	output.close();
    return 0;
}