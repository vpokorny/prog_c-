/*
 * =====================================================================================
 *
 *       Filename:  store.cpp
 *
 *    Description:  methods code for Store class
 *
 *        Version:  1.0
 *        Created:  11/10/2016 11:17:53 AM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Vaclav Pokorny
 *   Organization:  mat.fs.cvut.cz
 *
 * =====================================================================================
 */
//include private headers
#include "store.h"

//functions code

Store::Store()
{
    x.resize(0);
    y.resize(0);
    input.resize(0);
}

void Store::load(const char* filename)
{
    ifstream f;

    f.open(filename);

    if(!f)
    {
        cout << "Input file not found!!!" << endl;
        exit(1);
    }

    //find tag in file
    string tag, tags[] = {"pocatek_intervalu", "konec_intervalu", "pocet_kroku", "exponent"};
    input.resize(sizeof(tags)/sizeof(tags[0]));

    //cout << sizeof(tags)/sizeof(tags[0]) << endl;
    for( int i = 0; i < sizeof(tags)/sizeof(tags[0]); i++)
    {
        while(tag != tags[i])
        {
            getline(f, tag);
            if(f.eof())
            {
                cout << "Tag not found in file!!" << endl;
                exit(1);
            }
        }
        f >> input.at(i);
    }
    x.resize(input.at(2) + 1);
    y.resize(input.at(2) + 1);


    f.close();
}

void Store::save(const char* filename)
{
    ofstream o;
    o.open(filename);

    int Size = input.at(2);
    //Zapis spoctenych dat
    for(int i = 0; i <= Size; i++)
    {
        o << (x.at(i)) << "\t" << (y.at(i)) << endl;
    }
    o.close();
}
void Store::calc()
{

  double h = (input.at(1) - input.at(0)) / input.at(2);

  //vypocet prubehu funkce
  for(int i = 0; i <= input.at(2); i++)
  {
    x.at(i) = input.at(0) + h * i;
    y.at(i) = fun(x.at(i), input.at(3));
  }
}

double Store::fun(double base, double exponent)
{
    return pow(base, exponent);
}
