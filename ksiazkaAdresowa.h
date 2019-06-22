#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAASRESOWA_H

#include <iostream>
#include "uzytkownikMenadzer.h"


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
    void zmianaHaslaZalogowanegoUzytkownika(int idZalogowanegoUzytkownika);

    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : uzytkownikManadzer(nazwaPlikuZUzytkownikami) {
            uzytkownikManadzer.wczytajUzytkownikowZPliku();
            idZalogowanegoUzytkownika=0;
    };
};

#endif
