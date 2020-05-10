#include <fstream>
#include <iostream>
#include <iterator>
#include <vector>
#include "book-test.h"



using namespace std;


void popuni(vector<string>& v, Library& biblioteka)
{


    string buffer;
    vector <string> buff_container;

    for (unsigned int i = 0 ; i < v.size() ; i++)
    {
        if (v[i].back() == 'B')
        {
            v[i].pop_back();
            v[i].pop_back();
            for (unsigned int j = 0 ; j < v[i].size() ; j++)
                {
                    if (v[i][j] == ';')
                        {
                            buff_container.push_back(buffer);
                            buffer.clear();
                            j++;
                        }
                        buffer.push_back(v[i][j]);
                }
            buff_container.push_back(buffer);
            string pok = buff_container.back();
            EBook* pokazivac = new EBook(buff_container[0],buff_container[1],stod(pok));
            pokazivac->postavi_ime_datoteke(buff_container[2]);
            biblioteka.popuni(pokazivac);
            buff_container.clear();
            buffer.clear();


        }

        else{
            for (unsigned int j = 0 ; j < v[i].size() ; j++)
                {
                    if (v[i][j] == ';')
                        {
                            buff_container.push_back(buffer);
                            buffer.clear();
                            j++;
                        }
                        buffer.push_back(v[i][j]);
                }
            buff_container.push_back(buffer);
            string pok = buff_container.back();
            HardCopyBook* pokazivac =new HardCopyBook(buff_container[0],buff_container[1],stoi(pok));
            biblioteka.popuni(pokazivac);
            buff_container.clear();
            buffer.clear();
        }
    }





}


int main()
{
    ifstream fin("knjige.txt");
    vector<string> v;
    string line;

    // citanje i spremanje u vektor
    while(getline(fin, line))
    {
        if (line[0] == ' ')
            line.erase(0,1);
        v.push_back(line);
    }

/*
    vector<string>::iterator it;
    for (it = v.begin(); it != v.end(); ++it)
        cout << *it << endl;

for ( unsigned i = 0 ; i < v.size() ; i++)
{
    cout<<"\n"<<v[i].back()<<"\n";
}
*/


        Library biblioteka;
        popuni(v,biblioteka);

        //biblioteka.print_biblioteku();


        vector <string> naslovi = biblioteka.vrati_naslove("Aldous Huxley");
        cout<<naslovi[0]<<"\n";
        double velicina = 0;
        velicina = biblioteka.vrati_ukupni_size("Simson Garfinkel, Daniel Weise and Steven Strassmann");
        cout<<velicina<<"\n";

        vector<Book*> pronadene = biblioteka.pronadi("Manga");

        cout<<pronadene[0]->vrati_autora();
}
