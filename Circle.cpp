//
// Created by BK Allen on 3/4/20.
//

#include "Circle.h"


Circle::Circle() {

    radius = 0;
    Shape::setRefPoint(Point(0, 0));
}//end default constructor

Circle::Circle(int aRadius) {

    radius = aRadius;
    Shape::setRefPoint(Point(0, 0));
}//end constructor

double Circle::computeArea() {
    double first = radius * radius;
    Shape::setArea(double(3.14) * first);
    return getArea();
}//end computeArea()

double Circle::computeCircumference() {

    Shape::setCircumference(2 * 3.14 * radius);
    return getCircumference();
}//end computeCircumference()

//Outputs circle to console.  Radius greater than two is rendered as (***) with '*' as radius.
//Radius of 2 or below is rendered as 'O'
void Circle::draw() {
    for (int i = 0; i < getRefPoint().yCoord; i++) {
        std::cout << std::endl;
    }
    for (int i = 0; i < getRefPoint().xCoord; i++) {
        std::cout << ' ';
    }

    if (radius > 2) {
        std::cout << '(';
        for (int i = 0; i < radius; i++) {
            std::cout << getLineType();
        }
        std::cout << ')';
    }
    else {
        std::cout << 'O';
    }


}//end draw()


//Outputs circle to console for on the fly generation.  Radius greater than two is rendered as (***) with '*' as radius.
//Radius of 2 or below is rendered as 'O'
void Circle::draw(int aRadius) {
    for (int i = 0; i < getRefPoint().yCoord; i++) {
        std::cout << std::endl;
    }
    for (int i = 0; i < getRefPoint().xCoord; i++) {
        std::cout << ' ';
    }
    if (aRadius > 2) {
        std::cout << '(';
        for (int i = 0; i < aRadius; i++) {
            std::cout << getLineType();
        }
        std::cout << ')';
    }
    else {
        std::cout << 'O';
    }


}//end draw(aRadius)
