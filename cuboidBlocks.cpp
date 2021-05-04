#include "cuboidBlocks.h"
#include <iostream>
using namespace std;
cuboidBlocks::cuboidBlocks()
{}

cuboidBlocks::cuboidBlocks(char id, int l, int w, int h){
    shapeId = id;
    length = l;
    width = w;
    height = h;
}
