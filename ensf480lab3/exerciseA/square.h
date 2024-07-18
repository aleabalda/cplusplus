/*
 * File Name: square.h
 * Assignment: Lab 2 Exercise B
 * Lab Section: B02
 * Completed by: Alessandro Baldassarre
 * Submission Date: Wednesday, October 2, 2:00 PM
 */

#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square : virtual public Shape
{
private:
    double side_a;

public:
    Square(const Point &origin, const char *name, double side_a);
    Square(const Square &other);
    Square &operator=(const Square &other);
    virtual double area() const;
    virtual double perimeter() const;
    double getSideA() const;
    void setSideA(double side_a);
    virtual void display() const;
};

#endif // SQUARE_H
