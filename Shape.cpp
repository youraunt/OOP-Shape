//
// Created by BK Allen on 3/4/20.
//

#include "Shape.h"
#include "Shape.h"
#include "Point.h"

Shape::Shape() {

    refPoint = Point();
    area = 0;
    circumference = 0;
    lineType = '*';

}//end default constructor


//updates the reference point's horizontal location for a shape by an integer.
void Shape::moveBy(int anInt) {

    refPoint.xCoord += anInt;
    if (refPoint.xCoord < 0) {
        std::cout << "Reference Point cannot be moved below 0\n";
        refPoint.xCoord -= anInt;
    }
}





