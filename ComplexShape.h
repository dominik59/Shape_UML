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
    ComplexShape();
    ComplexShape(const ComplexShape& orig);
    virtual ~ComplexShape();
private:
    
protected:
    virtual bool in(int x, int y);


};

#endif /* COMPLEXSHAPE_H */

