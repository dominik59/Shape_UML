/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Rectangle.cpp
 * Author: Dominik
 * 
 * Created on 23 maj 2016, 18:36
 */

#include "Rectangle.h"

Rectangle::Rectangle(int x_pos, int y_pos, int width, int height) {
}

Rectangle::Rectangle(const Rectangle& orig) {
}

Rectangle::~Rectangle() {
}

bool Rectangle::in(int x, int y) {
    if (this->x_pos <= x && this->y_pos <= y && this->width >= x && this->width >= y) {
        return true;
    }
    else
    {
        return false;
    }
}

