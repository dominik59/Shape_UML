/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Dominik
 *
 * Created on 23 maj 2016, 18:34
 */

#include <cstdlib>
#include <iostream>
#include "ComplexShape.h"

using namespace std;
/*
 * 
 */
int main(int argc, char** argv) {
    ComplexShape cs(0,0);
    cs.addElement(1,0,10,10);
    cs.addElement(10,10,5);
    cs.addElement(15,15,5);
    cs.in(1,1);
    cs.diff(1,1);
    cs.paint_sum();
    cs.paint_diff();
    
//    ComplexShape cs1(2,2,cs);
//    cs1.diff(2,2);
//    cs1.paint_sum();
//    cs1.paint_diff();
    system("pause");
    return 0;
}

