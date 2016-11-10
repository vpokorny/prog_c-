/*
 * =====================================================================================
 *
 *       Filename:  load.cpp
 *
 *    Description:  load values to calculations in main.cpp
 *
 *        Version:  1.0
 *        Created:  11/10/2016 10:01:31 AM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Vaclav Pokorny
 *   Organization:  mat.fs.cvut.cz
 *
 * =====================================================================================
 */
//include standart libs

//include private headers
#include "load.h"

//functions code
void load(const char* filename, vector<double> *input)
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
        f >> input->at(i);
    }

    f.close();
}
