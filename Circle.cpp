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
#include <iostream>

using namespace std;

Circle::Circle(int x_pos,int y_pos, int r) {
    this->x_pos=x_pos;
    this->y_pos=y_pos;
    this->r=r;
}

Circle::Circle(const Circle& orig) {
}

Circle::~Circle() {
}
bool Circle::in(int x, int y)
{
    //cout<<sqrt(pow(x-this->x_pos,2)+pow(y-this->y_pos,2));
    if(sqrt(pow(x-this->x_pos,2)+pow(y-this->y_pos,2))<=this->r)
    {
        cout<<"Circle in true"<<endl;
        return true;
    }
    else
    {
        cout<<"Circle in false"<<endl;
        return false;
    }
}

