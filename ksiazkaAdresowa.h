#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAASRESOWA_H

#include <iostream>
#include "uzytkownikMenadzer.h"
#include "plikZUzytkownikami.h"

using namespace std;

class KsiazkaAdresowa
{
     UzytkownikManadzer uzytkownikManadzer;

public:
    int idZalogowanegoUzytkownika;
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    int logowanieUzytkownika();

    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : uzytkownikManadzer(nazwaPlikuZUzytkownikami) {
            uzytkownikManadzer.wczytajUzytkownikowZPliku();
    };
};

#endif
