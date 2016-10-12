#include "site.h"

Site::Site()
{
    cellId=-1;
    cellType=-1;
    xcord = -1;
    ycord = -1;
    fill = -1;

}



Site::Site(int fill1, int xcord1, int ycord1, int cellType1, int cellId1)
{
    cellId= cellId1;
    cellType= cellType1;
    xcord = xcord1;
    ycord = ycord1;
    fill = fill1;

}

int Site::initializeSite(int xcord1, int ycord1, int cellType1)
//return 1 if the filling is successful, 0 if not
{
    xcord =xcord1;
    ycord = ycord1;
    cellType= cellType1;
    fill= 0; //defult set the site to be empty
}

int Site::fillSite(int cellId1, int type)
{
    if (fill==1)
        return 0; //return 0 if the site is not empty
    if(cellType != type)
        return -1; //return -1, if the site and cell type are not the same

    fill=1;
    cellId=cellId1;
    return 1;

}

int Site::emptySite()
//empty the site
//return 1 if success, 0 if not
{
    if (fill)
    {
        fill =0;
        cellId = -1;

        return 1;
    }
    else
    {
        return 0;
    }

}

int Site::getX()
{
    return xcord;

}

int Site::getY()
{
    return ycord;
}

int Site::getFill()
{
    return fill;
}

int Site::getType()
{
    return cellType;

}

int Site::getCellId()
{
    return cellId;

}

void Site::printSite()
{
    printf("Filled? %d \n", fill);
    printf("Cell Index: %d \n", cellId);
    printf("Cell tye: %d \n", cellType);
    printf("Cell coordinates: %d %d \n", xcord, ycord);


}

