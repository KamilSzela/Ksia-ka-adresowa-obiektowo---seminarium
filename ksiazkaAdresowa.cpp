#include <iostream>
#include "ksiazkaAdresowa.h"

using namespace std;


void KsiazkaAdresowa::rejestracjaUzytkownika() {
    uzytkownikManadzer.rejestracjaUzytkownika();
}
void KsiazkaAdresowa::wypiszWszystkichUzytkownikow() {
    uzytkownikManadzer.wypiszWszystkichUzytkownikow();
}
void KsiazkaAdresowa::logowanieUzytkownika() {
    uzytkownikManadzer.logowanieUzytkownika();
    adresatManager = new AdresatManager(uzytkownikManadzer.pobierzIdZalogowanegoUzytkownika());
}
void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika() {
    uzytkownikManadzer.zmianaHaslaZalogowanegoUzytkownika();
}

char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego() {
    char wybor;

    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}
char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika() {
    char wybor;

    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}
void KsiazkaAdresowa::wylogujUzytkownika() {
    uzytkownikManadzer.wylogujUzytkownika();
    delete adresatManager;
    adresatManager = NULL;
}
void KsiazkaAdresowa::dodajAdresata() {
    adresatManager->dodajAdresata();
}
void KsiazkaAdresowa::wyswietlWszystkichAdresatow() {
    adresatManager->wyswietlWszystkichAdresatow();
}
bool KsiazkaAdresowa::czyUzytkownikJestZalogowany() {
    if(uzytkownikManadzer.czyUzytkownikJestZalogowany())
        return true;
    return false;
}
 void KsiazkaAdresowa::wyszukajAdresatowPoImieniu()
 {
     adresatManager->wyszukajAdresatowPoImieniu();
 }

  void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku()
 {
     adresatManager->wyszukajAdresatowPoNazwisku();
 }
 void KsiazkaAdresowa::usunAdresata()
 {
     adresatManager->usunAdresata();
 }
 void KsiazkaAdresowa::edytujAdresata()
 {
     adresatManager->edytujAdresata();
 }
