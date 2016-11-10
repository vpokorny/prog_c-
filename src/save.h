/*
 * =====================================================================================
 *
 *       Filename:  save.h
 *
 *    Description:  header file for save.h
 *
 *        Version:  1.0
 *        Created:  11/10/2016 10:22:45 AM
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
#include <fstream>
#include <vector>

//include private headers

//declare used namespace
using namespace std;

//declare functions
void save(const char* filename, vector<double> *x, vector<double> *y, double Size);
