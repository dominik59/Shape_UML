/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ComplexShape.cpp
 * Author: Dominik
 * 
 * Created on 23 maj 2016, 18:40
 */

#include "ComplexShape.h"
#include "Circle.h"
#include "Rectangle.h"
#include <iostream>

using namespace std;


Circle circle(0, 0, 5);
Rectangle rectangle(0, 0, 10, 10);
Rectangle rectangle1(0, 0, 10, 10);
ComplexShape cs1(0, 0);

ComplexShape::ComplexShape(int x, int y) {
    this->x = x;
    this->y = y;
    circle.addVector(x, y);
    rectangle.addVector(x, y);
    il_figur = 2;
}

ComplexShape::ComplexShape(int x, int y, ComplexShape cs) {
    this->x = x;
    this->y = y;
    circle.addVector(x, y);
    rectangle.addVector(x, y);
    rectangle1.addVector(x, y);
    cs1 = cs;
    il_figur = 3;
}

ComplexShape::~ComplexShape() {
}

bool ComplexShape::diff(int x, int y) {
    if (il_figur == 2) {
        if (circle.in(x, y) && !rectangle.in(x, y) || !circle.in(x, y) && !rectangle.in(x, y)) {
            cout << "ComplexShape diff true" << endl;
            return true;
        } else {
            cout << "ComplexShape diff false" << endl;
            return false;
        }
    } else if (il_figur == 3) {
        if (circle.in(x, y) && !rectangle.in(x, y) && !rectangle1.in(x, y) && !cs1.in(x, y) || !circle.in(x, y) && rectangle.in(x, y) && !rectangle1.in(x, y) && !cs1.in(x, y) || !circle.in(x, y) && !rectangle.in(x, y) && rectangle1.in(x, y) && !cs1.in(x, y) || !circle.in(x, y) && !rectangle.in(x, y) && !rectangle1.in(x, y) && cs1.in(x, y)) {
            cout << "ComplexShape diff true" << endl;
            return true;
        }
        else
        {
            cout << "ComplexShape diff false" << endl;
            return false;
        }
    }
}

bool ComplexShape::in(int x, int y) {
    if (il_figur == 2) {
        if (circle.in(x, y) && rectangle.in(x, y)) {
            cout << "ComplexShape in true" << endl;
            return true;
        } else {
            cout << "ComplexShape in false" << endl;
            return false;
        }
    } else if (il_figur == 3) {
        if (circle.in(x, y) && rectangle.in(x, y) && rectangle1.in(x, y) && cs1.in(x, y)) {
            cout << "ComplexShape in true" << endl;
            return true;
        } else {
            cout << "ComplexShape in false" << endl;
            return false;
        }
    }

}

void ComplexShape::addVector(int x, int y) {
    if (il_figur) {
        this->x = x;
        this->y = y;
        circle.addVector(x, y);
        rectangle.addVector(x, y);
    } else {
        this->x = x;
        this->y = y;
        circle.addVector(x, y);
        rectangle.addVector(x, y);
        rectangle1.addVector(x, y);
        cs1.addVector(x, y);

    }


}
