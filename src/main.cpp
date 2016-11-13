//include standart libs
#include <iostream>
#include <fstream>
#include <math.h>
#include <vector>
#include <cstdlib>		//=>	exit(1)

//include private headers
#include "store.h"

using namespace std;

int main(){
    Store Data;
    //declare vector for input parameters
    //vector<double> input(0);

    //load input file with parameters
    Data.load("vstup.txt");

    //Declare vector of x and y axis
    //vector<double> x(input.at(2) + 1), y(input.at(2) + 1);

    //calculation
    Data.calc();

    //save results of calculation
    Data.save("vysledek.txt");

    return 0;
}