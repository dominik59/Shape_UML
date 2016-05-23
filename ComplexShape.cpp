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

Circle circle(0,0,5);
Rectangle rectangle(0,0,10,10);

ComplexShape::ComplexShape() {
}

ComplexShape::~ComplexShape() {
}

ComplexShape::in(int x, int y)
{
    if(circle.in(1,1)&&rectangle.in(1,1))
    {
        return true;
    }
    else
    {
        return false;
    }
}

