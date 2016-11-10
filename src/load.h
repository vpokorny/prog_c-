/*
 * =====================================================================================
 *
 *       Filename:  load.h
 *
 *    Description:  header file for load.cpp
 *
 *        Version:  1.0
 *        Created:  11/10/2016 10:01:41 AM
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
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <vector>

//declare used namespace
using namespace std;

//declare functions
void load(const char* filename, vector<double> *input);
