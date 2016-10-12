#ifndef SITE_H
#define SITE_H

#include <iostream>
#include <stdlib.h>
#include <stdio.h>


class Site
{
public:
    Site();
    Site(int fill1, int xcord1, int ycord1, int cellType1, int cellId1);
    int initializeSite(int xcord1, int ycord1, int cellType1);
    int fillSite(int cellId1, int type);
    int emptySite();
    int getX();
    int getY();
    int getFill();
    int getType();
    int getCellId();
    void printSite();


private:
    int fill; //if fiilled = 1, if not 0
    int xcord;//X coordinate
    int ycord;//y coordinate
    int cellType; //the type of cell this site can store
    int cellId; //the id of cell this site store, -1 if empty
};



#endif // SITE_H
