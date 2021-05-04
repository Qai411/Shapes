#include "cylindricalBlocks.h"
#include <iostream>
#include <cmath>
using namespace std;
cylindricalBlocks::cylindricalBlocks()
{}

cylindricalBlocks::cylindricalBlocks(double d){
    cylinderDiameter = d;
}

double cylindricalBlocks::cylinderArea(){
    return   (2.0 * 3.142 * pow(getCylinderDiameter()/2.0, 2)) +  (getCylinderDiameter() * 3.142 * length);   // 2*pi*r^2 + pi*d*l -- Area of a cylinder formula
}

double cylindricalBlocks::getCylinderDiameter(){
    return cylinderDiameter;
}

double cylindricalBlocks::cylinderVolume(){
    return 3.142 * pow(getCylinderDiameter()/2.0, 2) * length;
}

