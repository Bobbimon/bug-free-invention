/*
 * Characters.cpp
 *
 *  Created on: 15 apr. 2016
 *      Author: jogr
 */
#include "AttackData.h"
#include <iostream>
#include <string>
#include "Characters.h"
#include <sstream>
#include <fstream>

using namespace std;

void Characters::characters(int x){



choice = x;      // number to be converted to a string

string Result;          // string which will contain the result

ostringstream convert;   // stream used for the conversion

convert << choice;      // insert the textual representation of 'Number' in the characters in the stream

Result = convert.str();

//ifstream characters("characters.txt");

ifstream myfile;
myfile.open ("characters.txt");

while (myfile >>nr>> name){
	if (Result.compare(nr)==0){
		cout<<nr<<name<< Result<<endl;
	}
	//getline(choice,name);
}

myfile.close();
//buckyFile<<"I love tuna and tuna loves me!\n";
//buckyFile.close();
}

