#include "rectBlocks.h"
#include <iostream>
using namespace std;
rectBlocks::rectBlocks()
{

}

rectBlocks::rectBlocks(char id, int l, int w, int h){
    shapeId = id;
    length = l;
    width = w;
    height = h;
}

void rectBlocks::printDimension(){
    printf("l: %i w: %i h: %i", length, width, height);

}
