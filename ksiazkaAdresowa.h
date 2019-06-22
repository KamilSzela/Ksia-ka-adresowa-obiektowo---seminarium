#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAASRESOWA_H

#include <iostream>
#include "uzytkownikMenadzer.h"
#include "plikZUzytkownikami.h"

using namespace std;

class KsiazkaAdresowa
{
     UzytkownikManadzer uzytkownikManadzer;
     int idZalogowanegoUzytkownika;
public:

    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    int logowanieUzytkownika();
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
    int pobierzIdZalogowanegoUzytkownika();
    void ustawIdZalogowanegoUzytkownika(int ID);

    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : uzytkownikManadzer(nazwaPlikuZUzytkownikami) {
            uzytkownikManadzer.wczytajUzytkownikowZPliku();
            idZalogowanegoUzytkownika=0;
    };
};

#endif
