/*
 * =====================================================================================
 *
 *       Filename:  calc.cpp
 *
 *    Description:  calculated function in main.cpp
 *
 *        Version:  1.0
 *        Created:  11/10/2016 09:23:11 AM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Vaclav Pokorny
 *   Organization:  mat.fs.cvut.cz
 *
 * =====================================================================================
 */

//include private headers
#include "calc.h"

//functions code
void calc(vector<double> *x, vector<double> *y, double n_step, double x_a, double x_b, double expo)
{

  double h = (x_b - x_a) / n_step;

  //vypocet prubehu funkce
  for(int i = 0; i <= n_step; i++)
  {
    x->at(i) = x_a + h * i;
    y->at(i) = fun(x->at(i), expo);
  }
}
