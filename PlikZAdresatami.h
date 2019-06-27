#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H


#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include "Adresat.h"
#include "PlikTekstowy.h"
#include "metodyPomocnicze.h"

using namespace std;
class PlikZAdresatami : public PlikTekstowy {
   // const string NAZWA_PLIKU;
    int idOstatniegoAdresata;

    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
   // bool czyPlikJestPusty(fstream &plikTekstowy);

public:
    PlikZAdresatami(string nazwaPliku) : PlikTekstowy(nazwaPliku) {};
    void dopiszAdresataDoPliku(Adresat adresat);
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika, vector<Adresat> &adresaci);
    int pobierzIdOstatniegoAdresata();
};
#endif
