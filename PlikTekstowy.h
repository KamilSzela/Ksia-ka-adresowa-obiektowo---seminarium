#ifndef PLIKTEKSTOWY_H
#define PLIKTEKSTOWY_H

#include <iostream>
#include <fstream>

using namespace std;

class PlikTekstowy
{
    const string NAZWA_PLIKU;
    protected:
    bool czyPlikJestPusty(fstream &plikTekstowy);
    public:
        PlikTekstowy(string nazwaPliku) :NAZWA_PLIKU(nazwaPliku){};
        string pobierzNazwePliku();
};

#endif
