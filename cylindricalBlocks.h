#ifndef CYLINDRICALBLOCKS_H
#define CYLINDRICALBLOCKS_H

#include "sqrBaseRectBlocks.h"
class cylindricalBlocks : public sqrBaseRectBlocks
{
    public:
        cylindricalBlocks();

        cylindricalBlocks(double d);

        double cylinderArea();
        double cylinderVolume();
        double getCylinderDiameter();


        void setLength(int l);
        void setWidth(int w);
        void setheight(int h);


    protected:
        double cylinderDiameter;

    private:
};

#endif // CYLINDRICALBLOCKS_H
