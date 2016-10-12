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
class Site;

int** readSitemap(const char* file);
Site** readSitemap_siteClass(const char* file); // added 10/12 by keren
void readNets(const char* file, vector<Net>& netRecords);
void readPl(const char* file, vector<Cell>& cellRecords);
void readPl_siteClass(const char* file, vector<Cell>& cellRecords, Site** sitemap); // added 10/12 by keren

#endif /* READFILE_H_ */
