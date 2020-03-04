//
// Created by BK Allen on 3/4/20.
//

#ifndef SHAPE_RECTANGLE_H
#define SHAPE_RECTANGLE_H

#include <iostream>
#include "Shape.h"

//Class Description: Class for the rectangle shape, inherits functions from shape base class.
class Rectangle : public Shape {

    //Variables///////////////////////////////////////
    int width, height;

public:
    //Constructors////////////////////////////////
    Rectangle();
    Rectangle(int width, int height);

    //Setters/////////////////////////////////////
    void setWidth(int anInt) { width = anInt; }
    void setHeight(int anInt) { height = anInt; }

    //Getters/////////////////////////////////////
    int getWidth() const { return width; }
    int getHeight() const { return height; }

    //Methods/////////////////////////////////////
    double computeArea() override;
    double computeCircumference();
    void draw();
    void draw(int width, int height);		//Allows for on the fly rendering of rectangles
};

#endif //SHAPE_RECTANGLE_H
