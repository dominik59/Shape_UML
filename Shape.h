/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Shape.h
 * Author: Dominik
 *
 * Created on 23 maj 2016, 18:35
 */

#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
    Shape();
    Shape(const Shape& orig);
    virtual ~Shape();
private:

protected:
    int x_pos;
    int y_pos;
    virtual bool in(int x,int y);
};

#endif /* SHAPE_H */

