//
// Created by BK Allen on 3/4/20.
//

#include "Rectangle.h"
#include "Shape.h"

//constructors will set all attributes to 0 and set vertical and horizontal line types
Rectangle::Rectangle() {
    width = 0;
    height = 0;
    setRefPoint(Point(0, 0));
    setHLineType('_');
    setVLineType('|');
}//end default constructor

//constructors will set all attributes to 0 and set vertical and horizontal line types
Rectangle::Rectangle(int width, int height) {

    this->width = width;
    this->height = height;
    setRefPoint(Point(0, 0));
    setHLineType('_');
    setVLineType('|');
}//end constructor, two arguments


//sets area to width x height
double Rectangle::computeArea() {
    Shape::setArea(double(width) * double(height));
    return getArea();

}//end computeArea()

//sets circumference to the sum of twice the width and twice the height
double Rectangle::computeCircumference() {
    Shape::setCircumference((2 * double(width)) + (2 * double(height)));
    return getCircumference();
}//end computeCircumference()

//outputs the rectangle to the console using the designated line type
void Rectangle::draw() {
    //newline to draw
    std::cout << std::endl;

    //output newlines for y coord
    for (int i = 0; i < Shape::getRefPoint().yCoord; i++) {
        std::cout << std::endl;
    }

    //output spaces for x reference point
    for (int x = 0; x < Shape::getRefPoint().xCoord; x++) {
        std::cout << "  ";
    }
    //draw first line
    std::cout << ' ';
    for (int i = 0; i < (2*width)-2; i++) {
        std::cout << Shape::getHLineType();
    }
    std::cout << std::endl;

    //then draw middle sections
    for (int i = 0; i < (height - 2); i++) {
        //adjust for x reference point
        for (int x = 0; x < Shape::getRefPoint().xCoord; x++) {
            std::cout << "  ";
        }
        //draw each middle section
        std::cout << Shape::getVLineType();
        for (int n = 0; n < (width - 1); n++) {
            std::cout << "  ";
        }
        std::cout << Shape::getVLineType();
        std::cout << std::endl;
    }
    //adjust for x reference point, then draw bottom line
    for (int x = 0; x < Shape::getRefPoint().xCoord; x++) {
        std::cout << "  ";
    }
    std::cout << Shape::getVLineType();
    for (int i = 0; i < (2*width)-2; i++) {
        std::cout << Shape::getHLineType();
    }
    std::cout << Shape::getVLineType();

}//end draw()



void Rectangle::draw(int width, int height) {
    //newline to draw
    std::cout << std::endl;

    //draw first line
    for (int i = 0; i < width; i++) {
        std::cout << "* ";
    }
    std::cout << std::endl;

    //then draw middle sections
    for (int i = 0; i < (height - 2); i++) {

        std::cout << '*';
        for (int n = 0; n < (width - 2); n++) {
            std::cout << "  ";
        }
        std::cout << " *";
        std::cout << std::endl;
    }
    //then draw bottom line

    for (int i = 0; i < width; i++) {
        std::cout << "* ";
    }


}//end draw, two arguments

#include "Rectangle.h"
