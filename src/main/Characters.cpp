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


ostringstream ostr;
ostr << x;
choice = ostr.str() + ".";

ifstream myfile;
myfile.open ("characters.txt");

while (myfile >> nr >> name){
	if (choice.compare(nr)==0){
		cout << nr << " " << name << endl;

	}
}

myfile.close();
//buckyFile<<"I love tuna and tuna loves me!\n";
//buckyFile.close();
}
