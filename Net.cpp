/*
 * Net.cpp
 *
 *  Created on: 2016Äê10ÔÂ3ÈÕ
 *      Author: zwangaj
 */

#include "Net.h"

Net::Net() {
	cost=0;
}

Net::Net(string name, vector<int> nodeList){
	netName=name;
	cellList=nodeList;
}

Net::~Net() {
	// TODO Auto-generated destructor stub
}

string Net::getName(){
	return netName;
}

int Net::getCost(){
	return cost;
}

int Net::updateCost(){

	return cost;
}

int Net::getSize(){
	return cellList.size();
}
int Net::getNode(int num){
	return cellList[num];
}
