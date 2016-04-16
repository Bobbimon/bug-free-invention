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
#include <fstream>

using namespace std;

void Characters::characters(int x){

choice = x;

//ifstream characters("characters.txt");

ifstream myfile;
myfile.open ("characters.txt");

while (myfile >> name){
	//getline(choice,name);
	cout<<name<< choice<<endl;
}

myfile.close();
//buckyFile<<"I love tuna and tuna loves me!\n";
//buckyFile.close();
}

