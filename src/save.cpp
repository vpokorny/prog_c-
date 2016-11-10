/*
 * =====================================================================================
 *
 *       Filename:  save.cpp
 *
 *    Description:  function used to save results of calculations in main.cpp
 *
 *        Version:  1.0
 *        Created:  11/10/2016 10:19:16 AM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Vaclav Pokorny
 *   Organization:  mat.fs.cvut.cz
 *
 * =====================================================================================
 */
//include private headers
#include "save.h"

//functions code
void save(const char* filename, vector<double> *x, vector<double> *y, double Size)
{
    ofstream o;
    o.open(filename);

    //Zapis spoctenych dat
    for(int i = 0; i <= Size; i++)
    {
        o << (x->at(i)) << "\t" << (y->at(i)) << endl;
    }
    o.close();
}
