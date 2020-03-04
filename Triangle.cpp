//
// Created by BK Allen on 3/4/20.
//
#include "Triangle.h"

Triangle::Triangle() {
    base = 0;
    height = 0;
    setRefPoint(Point(0, 0));
    setLeftLineType('/');
    setRightLineType('\\');
    setHLineType('_');
}//end default constructor

Triangle::Triangle(int aBase, int aHeight) {
    base = aBase;
    height = aHeight;
    setRefPoint(Point(0, 0));
    setLeftLineType('/');
    setRightLineType('\\');
    setHLineType('_');
}//end constructor

void Triangle::draw() {
    //adjust for y coord
    for (int i = 0; i < Shape::getRefPoint().yCoord; i++) {
        std::cout << std::endl;
    }

    int counter = 0;
    std::cout << std::endl;

    //iterate through levels from top down
    for (int i = 0; i < (height - 1); i++) {

        //draw point of triangle
        if (counter == 0) {
            //adjust for x coord
            for (int x = 0; x < Shape::getRefPoint().xCoord; x++) {
                std::cout << "  ";
            }
            for (int j = 0; j < (base - 1); j++) {
                std::cout << " ";
            }
            std::cout << ' ' << getLeftLineType();
            std::cout << getRightLineType();
            std::cout << std::endl;
            counter++;

        }
        //adjust for x coord
        for (int x = 0; x < Shape::getRefPoint().xCoord; x++) {
            std::cout << "  ";
        }
        //draw middle sections of triangle
        for (int j = 0; j < (base -counter); j++) {
            std::cout << ' ';
        }
        std::cout << getLeftLineType();
        for (int x = 0; x < (2*counter); x++) {
            std::cout << ' ';
        }
        std::cout << getRightLineType();
        std::cout << std::endl;
        counter++;
    }
    //adjust for x coord
    for (int x = 0; x < Shape::getRefPoint().xCoord; x++) {
        std::cout << "  ";
    }
    //draw base of triangle
    std::cout << getLeftLineType();
    for (int i = 0; i <= (2*base)-1; i++) {
        std::cout << Shape::getHLineType();
    }
    std::cout << getRightLineType();
}//end draw()

void Triangle::draw(int base, int height) {
    //adjust for y coord
    for (int i = 0; i < Shape::getRefPoint().yCoord; i++) {
        std::cout << std::endl;
    }

    int counter = 0;
    std::cout << std::endl;

    //iterate through levels from top down
    for (int i = 0; i < (height - 1); i++) {

        //draw point of triangle
        if (counter == 0) {
            //adjust for x coord
            for (int x = 0; x < Shape::getRefPoint().xCoord; x++) {
                std::cout << "  ";
            }
            for (int j = 0; j < (base - 1); j++) {
                std::cout << " ";
            }
            std::cout << ' ' << getLeftLineType();
            std::cout << getRightLineType();
            std::cout << std::endl;
            counter++;

        }
        //adjust for x coord
        for (int x = 0; x < Shape::getRefPoint().xCoord; x++) {
            std::cout << "  ";
        }
        //draw middle sections of triangle
        for (int j = 0; j < (base - counter); j++) {
            std::cout << ' ';
        }
        std::cout << getLeftLineType();
        for (int x = 0; x < (2 * counter); x++) {
            std::cout << ' ';
        }
        std::cout << getRightLineType();
        std::cout << std::endl;
        counter++;
    }
    //adjust for x coord
    for (int x = 0; x < Shape::getRefPoint().xCoord; x++) {
        std::cout << "  ";
    }
    //draw base of triangle
    std::cout << getLeftLineType();
    for (int i = 0; i <= (2 * base) - 1; i++) {
        std::cout << Shape::getHLineType();
    }
    std::cout << getRightLineType();

}//end draw(int base, int height)


double Triangle::computeArea() {

    Shape::setArea(.5 * base * height);
    return getArea();
}//end computeArea()

double Triangle::computeCircumference() {

    double leg = sqrt((base * .5) * (base * .5) + (height * height));
    setCircumference((2 * leg) + base);
    return getCircumference();
}//end computeCircumference()
