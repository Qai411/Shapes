#include "sphericalBlocks.h"
#include "rectBlocks.h"
#include <iostream>
#include <cmath>
using namespace std;
sphericalBlocks::sphericalBlocks(int d)
: diameter(d)
{}

sphericalBlocks::sphericalBlocks(int l, int w, int h){
    setLength(l);
    setWidth(w);
    setHeight(h);
}

double sphericalBlocks::areaofSphere(){
    return 4.0 * 3.142 * pow(getDiameter()/2.0,2); // 4*pi*r^2 Formula for area of sphere
}

double sphericalBlocks::volumeofSphere(){
    return (4.0 / 3.0 )* 3.142 * pow(getDiameter()/2.0, 3); // 4/3*pi*r^3 formula for volume
}


void sphericalBlocks::setHeight(int h){
    height = h;
}

void sphericalBlocks::setLength(int l){
    length = l;
}

void sphericalBlocks::setWidth(int w){
    width = w;
}

double sphericalBlocks::getDiameter(){
    return diameter;
}
