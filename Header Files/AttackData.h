/*
 * AttackData.h
 *
 *  Created on: 14 apr. 2016
 *      Author: jogr
 */

#ifndef SRC_MAIN_ATTACKDATA_H_
#define SRC_MAIN_ATTACKDATA_H_
#include <string>


class AttackData {
public:
	void setCharacter(int);
	int getCharacter();
	void setHit(int);
	int getHit();
	void setBlock(int);
	int getBlock();
private:
	int character;
	int hit;
	int block;
};

#endif /* SRC_MAIN_ATTACKDATA_H_ */
