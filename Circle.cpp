/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Circle.cpp
 * Author: Dominik
 * 
 * Created on 23 maj 2016, 18:36
 */
#include <math.h>
#include "Circle.h"

Circle::Circle(int x_pos,int y_pos, int r) {
}

Circle::Circle(const Circle& orig) {
}

Circle::~Circle() {
}
bool Circle::in(int x, int y)
{
    if(sqrt(pow(x-this->x_pos,2)+pow(y-this->y_pos,2))<=this->r)
    {
        return true;
    }
    else
    {
        return false;
    }
}

