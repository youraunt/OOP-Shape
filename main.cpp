/*
Name: David Russell
Course: CSCI 2312
Assignment: Programming Assignment 2
Due Date: 2/19/20
Description:  Implement a system of classes to create various shapes using the principles of inheritance and polymorphism.
			  This program contains 5 shape classes and one point struct.  The main driver will output a drawing to the console
			  with 7 shapes, each shape's area and circumference, and the total area and circumference of the drawing.
*/

#include <iostream>
#include "Point.h"
#include "Shape.h"
#include "Rectangle.h"
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

using namespace std;

int main() {

    cout << "Name: David Russell\n";
    cout << "Programming Assignment 2\n\n";

    Circle* a = new Circle(1);
    Triangle* b = new Triangle(6,6);
    Rectangle* c = new Rectangle(7, 15);
    Circle* d = new Circle(7);
    Rectangle* e = new Rectangle(15, 6);
    Circle* f = new Circle(7);
    Square* g = new Square(5);


    a->moveBy(15);
    b->moveBy(4);
    c->moveBy(4);
    d->moveBy(6);

    a->draw();
    cout << "   <---Circle 1 area: " << a->computeArea() << " units squared.  Circumference: " << a->computeCircumference() << " units.";
    b->draw();
    cout << "   <---Triangle area: " << b->computeArea() << " units squared  Circumference: " << b->computeCircumference() << " units.";
    c->draw();
    cout << "   <---Rectangle 1 area: " << c->computeArea() << " units squared  Circumference:  " << c->computeCircumference() << " units.";
    cout << endl;
    d->draw();
    f->draw();
    cout << "   <---Circle 2 and 3 area: " << d->computeArea() << " and " << f->computeArea() << " units squared.  Circumference:  "  << d->computeCircumference() << " and " << f->computeCircumference() << " units.";
    e->draw();
    cout << "   <---Rectangle 2 area: " << e->computeArea() << " units squared.  Circumference:  " << e->computeCircumference() << " units.";

    double totalArea = a->computeArea() + b->computeArea() + c->computeArea() + d->computeArea() + e->computeArea() + f->computeArea() + g->computeArea();
    double totalCircumference = a->computeCircumference() + b->computeCircumference() + c->computeCircumference() + d->computeCircumference() + e->computeCircumference() + f->computeCircumference() + g->computeCircumference();
    cout << endl;
    cout << endl;
    cout << "Total Area: " << totalArea << " units squared."<< endl;
    cout << "Total Circumference " << totalCircumference << " units." << endl;


    return 0;
}
