#include "AdresatManager.h"

int AdresatManager::dodajAdresata(int idZalogowanegoUzytkownika)
{
    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata(idZalogowanegoUzytkownika, idOstatniegoAdresata);

    adresaci.push_back(adresat);
    dopiszAdresataDoPliku(adresat);

    return ++idOstatniegoAdresata;
}
int AdresatManager::wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika)
{
   idOstatniegoAdresata = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika, adresaci);
}
Adresat AdresatManager::podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata)
{
    Adresat adresat;

    adresat.ustawId(++idOstatniegoAdresata);
    adresat.ustawIdUzytkownika(idZalogowanegoUzytkownika);

    cout << "Podaj imie: ";
    string imie;
    cin >> imie;
    imie = MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(imie);
    adresat.ustawImie(imie);

    cout << "Podaj nazwisko: ";
    string nazwisko;
    cin >> nazwisko;
    nazwisko = MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(nazwisko);
    adresat.ustawNazwisko(nazwisko);

    cout << "Podaj numer telefonu: ";
    string numerTel;
    cin.sync();
    getline(cin, numerTel);
    adresat.ustawNumerTelefonu(numerTel);

    cout << "Podaj email: ";
    string email;
    getline(cin, email);
    adresat.ustawEmail(email);

    cout << "Podaj adres: ";
    string adres;
    getline(cin, adres);
    adresat.ustawAdres(adres);

    return adresat;
}
 void AdresatManager::dopiszAdresataDoPliku(Adresat adresat)
 {
     plikZAdresatami.dopiszAdresataDoPliku(adresat);
 }



