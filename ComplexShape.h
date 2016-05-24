/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ComplexShape.h
 * Author: Dominik
 *
 * Created on 23 maj 2016, 18:40
 */
#include "Shape.h"
#ifndef COMPLEXSHAPE_H
#define COMPLEXSHAPE_H

class ComplexShape : public Shape{
public:
    ComplexShape(int x, int y);   
    ComplexShape(int x, int y, ComplexShape cs);
    virtual ~ComplexShape();
    virtual bool in(int x, int y);
    virtual bool diff(int x, int y);
    void addVector(int x, int y);
    
private:
    
protected:
    int x;
    int y;
    int il_figur;


};

#endif /* COMPLEXSHAPE_H */

