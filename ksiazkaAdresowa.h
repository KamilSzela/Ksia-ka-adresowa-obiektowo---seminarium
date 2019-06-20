#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAASRESOWA_H

#include <iostream>
#include "uzytkownikMenadzer.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikManadzer uzytkownikManadzer;
public:
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
};

#endif
