//
// Created by BK Allen on 3/4/20.
//

#ifndef SHAPE_SQUARE_H
#define SHAPE_SQUARE_H


#include "Rectangle.h"

//Class Description:  Square class inheriting attributes and methods from the rectangle class
class Square : public Rectangle {



public:
    //Constructors////////////////////////////
    Square();
    Square(int aSide);

    //Methods/////////////////////////////////
    void setSide(int anInt);




};


#endif //SHAPE_SQUARE_H
