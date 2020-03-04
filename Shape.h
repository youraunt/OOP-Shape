//
// Created by BK Allen on 3/4/20.
//

#ifndef SHAPE_SHAPE_H
#define SHAPE_SHAPE_H



#include <iostream>
#include "Point.h"

/*Class Description:  Abstract base class for shape objects.  Contains generic attributes such as refernce point,
area, circumference, and line type.  Holds virtual function declarations for drawing, computing area and circumference.*/
class Shape {


    //Variables///////////////////////////////////////
    Point refPoint;		 //*****Reference point will refer to the top left corner of the box surrounding the shape*****
    double area, circumference;
    char lineType; 		//lineType will hold the character for the circle and draw(length) and draw(width, height)
    char hLineType{}, vLineType{};  	//Hold the horizontal and vertical line types


public:
    //Constructor////////////////////////////////////
    Shape();

    //Setters///////////////////////////////////////
    void setRefPoint(Point newPoint) { refPoint = newPoint; }
    void setArea(double newArea) { area = newArea; }
    void setCircumference(double newCircumference) { circumference = newCircumference; }
    void setLineType(char newLineType) { lineType = newLineType; }
    void setHLineType(char newLineType) { hLineType = newLineType; }
    void setVLineType(char newLineType) { vLineType = newLineType; }

    //Getters////////////////////////////////////////
    Point getRefPoint() { return refPoint; }
    double getArea() { return area; }
    double getCircumference() { return circumference; }
    char getLineType() { return lineType; }
    char getHLineType() { return hLineType; }
    char getVLineType() { return vLineType; }

    //Methods////////////////////////////////////////
    //All virtual methods will be defined in shape subclasses and overridden
    virtual double computeArea() { return area; }
    virtual double computeCircumference() { return area; }
    virtual void draw() {};
    virtual void draw(int length) {};
    virtual void draw(int width, int height) {};
    void moveBy(int anInt);		//Will change the x value of a shape's reference point, result cannot be below 0


};




#endif //SHAPE_SHAPE_H
