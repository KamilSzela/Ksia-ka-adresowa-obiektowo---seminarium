#ifndef UZYTKOWNIKMENAGER_H
#define UZYTKOWNIKMENAGER_H


#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>
#include <vector>
#include "uzytkownik.h"
#include "plikZUzytkownikami.h"

using namespace std;

class UzytkownikManadzer
{
    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;

    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    PlikZUzytkownikami plikzUzytkownikami;
    Uzytkownik podajDaneNowegoUzytkownika();

public:

    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
};

#endif
