/*
 * Net.h
 *
 *  Created on: 2016��10��3��
 *      Author: zwangaj
 */

#ifndef NET_H_
#define NET_H_
#include "main.h"

class Net {
public:
	Net();
	Net(string name, vector<int> nodeList);
	virtual ~Net();
	string getName();
	int getCost();
	int updateCost();
	int getSize();
	int getNode(int num);

private:
	string netName;
	int cost;
	int cellNum;
	vector<int> cellList;
};

#endif /* NET_H_ */
