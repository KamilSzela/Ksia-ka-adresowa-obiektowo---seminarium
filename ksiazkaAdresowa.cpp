#include <iostream>
#include "ksiazkaAdresowa.h"

using namespace std;

 KsiazkaAdresowa::KsiazkaAdresowa()
{
    uzytkownikManadzer.wczytajUzytkownikowZPliku();
}
void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikManadzer.rejestracjaUzytkownika();
}
void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikManadzer.wypiszWszystkichUzytkownikow();
}

