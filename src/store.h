/*
 * =====================================================================================
 *
 *       Filename:  store.h
 *
 *    Description:  Store class header file
 *
 *        Version:  1.0
 *        Created:  11/10/2016 11:06:38 AM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Vaclav Pokorny
 *   Organization:  mat.fs.cvut.cz
 *
 * =====================================================================================
 */

//fomalities
#pragma ones

//include standart libs
#include <iostream>
#include <fstream>
#include <math.h>
#include <vector>
#include <cstdlib>		//=>	exit(1)

//include private headers

//declare used namespace
using namespace std;

//declare classes
class Store
{
    private:
        //coordinates x and y
        vector<double> x, y;

        //vector of input parameters
        vector<double> input;

    public:
        Store();
        void load(const char* filename);
        void save(const char* filename);
        void calc();
        double fun(double base, double exponent);
};
