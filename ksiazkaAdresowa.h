#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAASRESOWA_H

#include <iostream>
#include "uzytkownikMenadzer.h"
#include "AdresatManager.h"

using namespace std;

class KsiazkaAdresowa
{
     UzytkownikManadzer uzytkownikManadzer;
     AdresatManager adresatManager;
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
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    void dodajAdresata();

    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : uzytkownikManadzer(nazwaPlikuZUzytkownikami) {
            uzytkownikManadzer.wczytajUzytkownikowZPliku();
            idZalogowanegoUzytkownika=0;
    };
};

#endif
