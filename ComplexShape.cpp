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

Circle circle(0,0,5);
Rectangle rectangle(0,0,10,10);

ComplexShape::ComplexShape() {
}

ComplexShape::~ComplexShape() {
}

bool ComplexShape::in(int x, int y)
{
    cout<<"sdsdssd";
    if(circle.in(x,y)&&rectangle.in(x,y))
    {
        cout<<"ComplexShape in true"<<endl;
        return true;
    }
    else
    {
        cout<<"ComplexShape in false"<<endl;
        return false;
    }
}

