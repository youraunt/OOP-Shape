//
// Created by BK Allen on 3/4/20.
//

#include "Square.h"

Square::Square() {
    setSide(0);
    setRefPoint(Point(0, 0));
    setHLineType('_');
    setVLineType('|');
}//end default constructor

Square::Square(int aSide) {

    setSide(aSide);
    setRefPoint(Point(0, 0));
    setHLineType('_');
    setVLineType('|');
}//end constructor with one argument

void Square::setSide(int anInt) {

    Rectangle::setHeight(anInt);
    Rectangle::setWidth(anInt);


}//end setSide()
