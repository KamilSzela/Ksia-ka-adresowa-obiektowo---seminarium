#ifndef ADRESATMANAGER_H
#define ADRESATMANAGER_H


#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>
#include "Adresat.h"
#include "metodyPomocnicze.h"
#include "PlikZAdresatami.h"
using namespace std;

class AdresatManager
{
    int idOstatniegoAdresata;
    PlikZAdresatami plikZAdresatami;
    vector <Adresat> adresaci;

    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    void dopiszAdresataDoPliku(Adresat adresat);
    void wyswietlDaneAdresata(Adresat adresat);

public:
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int dodajAdresata(int idZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatow();


};

#endif
