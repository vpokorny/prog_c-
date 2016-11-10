/*
 * =====================================================================================
 *
 *       Filename:  calc.h
 *
 *    Description:  Header file for calc.cpp
 *
 *        Version:  1.0
 *        Created:  11/10/2016 09:24:57 AM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Vaclav Pokorny
 *   Organization:  mat.fs.cvut.cz
 *
 * =====================================================================================
 */
#pragma ones

//include standart libs
#include <stdlib.h>
#include <cmath>
#include <vector>

//include private headers
#include "fun.h"

//declare used namespace
using namespace std;

//declare functions
void calc(vector<double> *x, vector<double> *y, double n_step, double x_a, double x_b, double expo);
