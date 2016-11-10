#include <iostream>
#include <fstream>
#include <math.h>
#include <vector>
#include <cstdlib>		//=>	exit(1)

#include "calc.h"
//#include "fun.h"

using namespace std;

void input_val(const char* filename, vector<double> *input)
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
    input->resize(sizeof(tags)/sizeof(tags[0]));

    cout << sizeof(tags)/sizeof(tags[0]) << endl;
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
        f >> input->at(i);
    }

    f.close();
}

void save_val(const char* filename, vector<double> *x, vector<double> *y, double Size)
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

int main(){
  //read entrance val
  vector<double> input(0);
  input_val("vstup.txt", &input);

  //Deklarovani dvou vektoru pro x-ovou a y-ovou souradnici
  vector<double> x(input.at(2) + 1), y(input.at(2) + 1);

  //calculation
  calc(&x, &y, input.at(2), input.at(0), input.at(1), input.at(3));

  //export val
  save_val("vysledek.txt", &x, &y, input.at(2));

  return 0;
}