//
// Created by BK Allen on 3/4/20.
//

#ifndef SHAPE_TRIANGLE_H
#define SHAPE_TRIANGLE_H



#include <cmath>
#include "Shape.h"

//Class Description:  Class for a triangle inheriting attributes and methods from the shape base class.
class Triangle : public Shape {

    //Variables///////////////////////////////////////
    int base, height;
    char leftLineType{}, rightLineType{};		//these line types differentiate between the left and right leg of the triangle

public:
    //Constructors//////////////////////////////////////////////
    Triangle();
    Triangle(int aBase, int aHeight);

    //Setters///////////////////////////////////////////////////
    void setHeight(int anInt) { height = anInt; }
    void setBase(int anInt) { base = anInt; }
    void setLeftLineType(char newLineType) { leftLineType = newLineType; }
    void setRightLineType(char newLineType) { rightLineType = newLineType; }

    //Getters///////////////////////////////////////////////////
    int getHeight() const { return height; }
    int getBase() const { return base; }
    char getLeftLineType() { return leftLineType; }
    char getRightLineType() { return rightLineType; }

    //Methods///////////////////////////////////////////////////
    void draw();
    void draw(int base, int height);		//allows for on the fly triangle rendering
    double computeArea();
    double computeCircumference();

};




#endif //SHAPE_TRIANGLE_H
