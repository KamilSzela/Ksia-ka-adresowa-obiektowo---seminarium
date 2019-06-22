#include <iostream>

#include "ksiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.logowanieUzytkownika();
    cout<<ksiazkaAdresowa.idZalogowanegoUzytkownika<<endl;
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    return 0;
}
