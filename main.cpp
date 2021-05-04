#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>

#include "rectBlocks.h"
#include "cuboidBlocks.h"
#include "sqrBaseRectBlocks.h"
#include "cylindricalBlocks.h"
#include "sphericalBlocks.h"

using namespace std;

void createSphereArry();
void loadDatablocksDat();
void createCylinderArry();


int main()
{
loadDatablocksDat();
createSphereArry();
createCylinderArry();


    return 0;
}

 void createSphereArry(){
    vector<sphericalBlocks> bag_of_balls;

        srand(time(0));

        double a = rand() % 10;
        double b = rand() % 10;
        double c = rand() % 10;

        sphericalBlocks ball1(a);
        sphericalBlocks ball2(b);
        sphericalBlocks ball3(c);

        cout << "a: " << a << " b: "<< b << " c: " << c << endl;

        cout << "\n<----SPHERICAL SHAPES------>" << endl;

        if ((a == b) == c){
            bag_of_balls.push_back(ball1);
            bag_of_balls.push_back(ball3);
            bag_of_balls.push_back(ball2);

            printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                    ball2.getDiameter(), ball2.areaofSphere(), ball2.volumeofSphere());
            printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                    ball1.getDiameter(), ball1.areaofSphere(), ball1.volumeofSphere());
            printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                    ball3.getDiameter(), ball3.areaofSphere(), ball3.volumeofSphere());


        }else{

            if (a > b){

                if (b < c){
                    bag_of_balls.push_back(ball1);
                    bag_of_balls.push_back(ball3);
                    bag_of_balls.push_back(ball2);

                    printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           ball2.getDiameter(), ball2.areaofSphere(), ball2.volumeofSphere());
                    printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           ball1.getDiameter(), ball1.areaofSphere(), ball1.volumeofSphere());
                    printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           ball3.getDiameter(), ball3.areaofSphere(), ball3.volumeofSphere());

                }

                if (b > c){
                    bag_of_balls.push_back(ball1);
                    bag_of_balls.push_back(ball2);
                    bag_of_balls.push_back(ball3);

                    printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           ball3.getDiameter(), ball3.areaofSphere(), ball3.volumeofSphere());
                    printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           ball2.getDiameter(), ball2.areaofSphere(), ball2.volumeofSphere());
                    printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           ball1.getDiameter(), ball1.areaofSphere(), ball1.volumeofSphere());
                }
            }else if(b > a ){

                if (c < b){
                    bag_of_balls.push_back(ball2);
                    bag_of_balls.push_back(ball1);
                    bag_of_balls.push_back(ball3);

                    printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           ball2.getDiameter(), ball2.areaofSphere(), ball2.volumeofSphere());
                    printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           ball1.getDiameter(), ball1.areaofSphere(), ball1.volumeofSphere());
                    printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           ball3.getDiameter(), ball3.areaofSphere(), ball3.volumeofSphere());

                }

                if(c > b){
                    bag_of_balls.push_back(ball1);
                    bag_of_balls.push_back(ball2);
                    bag_of_balls.push_back(ball3);


                    printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           ball3.getDiameter(), ball3.areaofSphere(), ball3.volumeofSphere());
                    printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           ball2.getDiameter(), ball2.areaofSphere(), ball2.volumeofSphere());
                    printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           ball1.getDiameter(), ball1.areaofSphere(), ball1.volumeofSphere());
                }

                if(a > c){
                    bag_of_balls.push_back(ball2);
                    bag_of_balls.push_back(ball1);
                    bag_of_balls.push_back(ball3);

                     printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           ball3.getDiameter(), ball3.areaofSphere(), ball3.volumeofSphere());
                    printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           ball1.getDiameter(), ball1.areaofSphere(), ball1.volumeofSphere());
                    printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           ball2.getDiameter(), ball2.areaofSphere(), ball2.volumeofSphere());
                }
            }else if (c > b) {
                    if(b > a){
                    bag_of_balls.push_back(ball3);
                    bag_of_balls.push_back(ball1);
                    bag_of_balls.push_back(ball2);

                    printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           ball2.getDiameter(), ball2.areaofSphere(), ball2.volumeofSphere());
                    printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           ball1.getDiameter(), ball1.areaofSphere(), ball1.volumeofSphere());
                    printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           ball3.getDiameter(), ball3.areaofSphere(), ball3.volumeofSphere());
                 }
            }
        }
}



void loadDatablocksDat(){
vector<rectBlocks> rectangular;
vector<sqrBaseRectBlocks> squarePrisms;
vector<cuboidBlocks> cube;
vector<cylindricalBlocks> can;


    ifstream dimensions("dataBlocks.dat");
    char id = 'a';
    int a,b,c;
    cout << "READY to Load File SIGNAL CODE: "<<rectangular.empty() <<endl; //Should print 1 to show emptyness

    while (dimensions >> a >> b >>c){
        rectBlocks a_shape(id, a, b, c);
        // Storing cubes in a vector array "cube" ( l = w = h )
        if((a == b) == c){
            cuboidBlocks cu(id, a, b, c);
            cube.push_back(cu);
        }
        // w = h or h = w gives a squareBasesRectangle
        if (a == b || b == c){
            sqrBaseRectBlocks s(id, a, b, c);
            squarePrisms.push_back(s);
        }
        rectangular.push_back(a_shape); // every rectBlock shape with dimensions is pushed into a vector
        id++;  // gives a unique character to every shape object
    }
    dimensions.close();
    cout << "Successfully streamed from file!  SIGNAL CODE "<< rectangular.empty() <<endl; //should print 0 to show data is successfully loaded into rectBlocks


}

void createCylinderArry(){
    vector<cylindricalBlocks> box_of_cans;

        srand(time(0));

        double x = rand() % 20;
        double y = rand() % 20;
        double z = rand() % 20;

        cylindricalBlocks can1(x);
        cylindricalBlocks can2(y);
        cylindricalBlocks can3(z);

        cout << "x: " << x << " b: "<< y << " c: " << z << endl;

        cout << "\n<----CYLINDRICAL SHAPES------>" << endl;

        if ((x == y) == z){
            box_of_cans.push_back(can1);
            box_of_cans.push_back(can3);
            box_of_cans.push_back(can2);

            printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                    can2.getCylinderDiameter(), can2.cylinderArea(), can2.cylinderVolume());
            printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                    can1.getCylinderDiameter(), can1.cylinderArea(), can1.cylinderVolume());
            printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                    can3.getCylinderDiameter(), can3.cylinderArea(), can3.cylinderVolume());


        }else{

            if (x > y){

                if (y < z){
                    box_of_cans.push_back(can1);
                    box_of_cans.push_back(can3);
                    box_of_cans.push_back(can2);

                    printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           can2.getCylinderDiameter(), can2.cylinderArea(), can2.cylinderVolume());
                    printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           can1.getCylinderDiameter(), can1.cylinderArea(), can1.cylinderVolume());
                    printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           can3.getCylinderDiameter(), can3.cylinderArea(), can3.cylinderVolume());

                }

                if (y > z){
                    box_of_cans.push_back(can1);
                    box_of_cans.push_back(can2);
                    box_of_cans.push_back(can3);

                    printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           can3.getCylinderDiameter(), can3.cylinderArea(), can3.cylinderVolume());
                    printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           can2.getCylinderDiameter(), can2.cylinderArea(), can2.cylinderVolume());
                    printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           can1.getCylinderDiameter(), can1.cylinderArea(), can1.cylinderVolume());
                }
            }else if(y > x ){

                if (z < y){
                    box_of_cans.push_back(can2);
                    box_of_cans.push_back(can1);
                    box_of_cans.push_back(can3);

                    printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           can2.getCylinderDiameter(), can2.cylinderArea(), can2.cylinderVolume());
                    printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           can1.getCylinderDiameter(), can1.cylinderArea(), can1.cylinderVolume());
                    printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           can3.getCylinderDiameter(), can3.cylinderArea(), can3.cylinderVolume());

                }

                if(z > y){
                    box_of_cans.push_back(can1);
                    box_of_cans.push_back(can2);
                    box_of_cans.push_back(can3);


                    printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           can3.getCylinderDiameter(), can3.cylinderArea(), can3.cylinderVolume());
                    printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           can2.getCylinderDiameter(), can2.cylinderArea(), can2.cylinderVolume());
                    printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           can1.getCylinderDiameter(), can1.cylinderArea(), can1.cylinderVolume());
                }

                if(x > z){
                    box_of_cans.push_back(can2);
                    box_of_cans.push_back(can1);
                    box_of_cans.push_back(can3);

                     printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           can3.getCylinderDiameter(), can3.cylinderArea(), can3.cylinderVolume());
                    printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           can1.getCylinderDiameter(), can1.cylinderArea(), can1.cylinderVolume());
                    printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           can2.getCylinderDiameter(), can2.cylinderArea(), can2.cylinderVolume());
                }
            }else if (z > y) {
                    if(y > x){
                    box_of_cans.push_back(can3);
                    box_of_cans.push_back(can1);
                    box_of_cans.push_back(can2);

                    printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           can2.getCylinderDiameter(), can2.cylinderArea(), can2.cylinderVolume());
                    printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           can1.getCylinderDiameter(), can1.cylinderArea(), can1.cylinderVolume());
                    printf("Diameter: %f  Surface: %f  Volume %f \n" ,
                           can3.getCylinderDiameter(), can3.cylinderArea(), can3.cylinderVolume());
                 }
            }
        }


}
