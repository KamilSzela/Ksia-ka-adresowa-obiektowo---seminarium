#include <iostream>
#include "ksiazkaAdresowa.h"

using namespace std;


void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikManadzer.rejestracjaUzytkownika();
}
void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikManadzer.wypiszWszystkichUzytkownikow();
}
int KsiazkaAdresowa::logowanieUzytkownika()
{
    return idZalogowanegoUzytkownika = uzytkownikManadzer.logowanieUzytkownika();
}

