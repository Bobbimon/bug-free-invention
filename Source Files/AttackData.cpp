/*
 * AttackData.cpp
 *
 *  Created on: 14 apr. 2016
 *      Author: jogr
 */
#include "../Header Files/AttackData.h"

#include <iostream>
#include <string>

using namespace std;

	void AttackData::setHit(int x){
		hit = x;
	}
//	void AttackData::setCharacter(int x){
//		character = x;
//	}
//	int AttackData::getCharacter(){
//		return character;
//	}
	int AttackData::getHit(){
		return hit;
	}
	void AttackData::setBlock(int x){
		block = x;
	}
	int AttackData::getBlock(){
		return block;
	}



