#ifndef SPHERICALBLOCKS_H
#define SPHERICALBLOCKS_H

#include "cuboidBlocks.h"
class sphericalBlocks : public cuboidBlocks
{
    public:
        //sphericalBlocks();
        sphericalBlocks(int l, int w, int h);
        sphericalBlocks(int d);
        double areaofSphere();
        double volumeofSphere();

        int getLength();
        int getWidth();
        int getHeight();

        double getDiameter();

        void setWidth(int w);
        void setLength(int l);
        void setHeight(int h);


    protected:

    private:
        int diameter;
};

#endif // SPHERICALBLOCKS_H
