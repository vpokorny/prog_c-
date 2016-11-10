//include standart libs
#include <iostream>
#include <fstream>
#include <math.h>
#include <vector>
#include <cstdlib>		//=>	exit(1)

//include private headers
#include "calc.h"
#include "load.h"
#include "save.h"

using namespace std;

int main(){
    //declare vector for input parameters
    vector<double> input(0);

    //load input file with parameters
    load("vstup.txt", &input);

    //Declare vector of x and y axis
    vector<double> x(input.at(2) + 1), y(input.at(2) + 1);

    //calculation
    calc(&x, &y, input.at(2), input.at(0), input.at(1), input.at(3));

    //save results of calculation
    save("vysledek.txt", &x, &y, input.at(2));

    return 0;
}