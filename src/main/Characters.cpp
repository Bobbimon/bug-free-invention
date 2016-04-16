/*
 * Characters.cpp
 *
 *  Created on: 15 apr. 2016
 *      Author: jogr
 */
#include "AttackData.h"
#include <iostream>
#include <string>
#include <sstream>
#include "Characters.h"
#include <sstream>
#include <fstream>

using namespace std;

void Characters::characters(int x){

<<<<<<< HEAD


choice = x;      // number to be converted to a string

string Result;          // string which will contain the result

ostringstream convert;   // stream used for the conversion

convert << choice;      // insert the textual representation of 'Number' in the characters in the stream

Result = convert.str();

//ifstream characters("characters.txt");
=======
ostringstream ostr;
ostr << x;
choice = ostr.str() + ".";
>>>>>>> 3a3afd7acfcdb3bc26f1105eb0582036829cde29

ifstream myfile;
myfile.open ("characters.txt");

<<<<<<< HEAD
while (myfile >>nr>> name){
	if (Result.compare(nr)==0){
		cout<<nr<<name<< Result<<endl;
=======
while (myfile >> nr >> name){
	if (choice.compare(nr)==0){
		cout << nr << " " << name << endl;
>>>>>>> 3a3afd7acfcdb3bc26f1105eb0582036829cde29
	}
}

myfile.close();
//buckyFile<<"I love tuna and tuna loves me!\n";
//buckyFile.close();
}
