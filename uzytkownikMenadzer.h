#ifndef UZYTKOWNIKMENAGER_H
#define UZYTKOWNIKMENAGER_H


#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>
#include "uzytkownik.h"
#include "plikZUzytkownikami.h"
#include "metodyPomocnicze.h"

using namespace std;

class UzytkownikManadzer
{
    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;
    PlikZUzytkownikami plikzUzytkownikami;

    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    Uzytkownik podajDaneNowegoUzytkownika();

public:
    UzytkownikManadzer(string nazwaPlikuZUzytkownikami) : plikzUzytkownikami(nazwaPlikuZUzytkownikami) {
    idZalogowanegoUzytkownika = 0;
    uzytkownicy=plikzUzytkownikami.wczytajUzytkownikowZPliku();
    };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void zapiszWszystkichUzytkownikowDoPliku();
    bool czyUzytkownikJestZalogowany();
    void wylogujUzytkownika();
    int pobierzIdZalogowanegoUzytkownika();
};

#endif
