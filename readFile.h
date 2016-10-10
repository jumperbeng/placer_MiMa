/*
 * readFile.h
 *
 *  Created on: 2016Äê10ÔÂ3ÈÕ
 *      Author: zwangaj
 */

#ifndef READFILE_H_
#define READFILE_H_
using namespace std;

#include "main.h"
class Cell;
class Net;

int** readSitemap(const char* file);
void readNets(const char* file, vector<Net>& netRecords);
void readPl(const char* file, vector<Cell>& cellRecords);

#endif /* READFILE_H_ */
