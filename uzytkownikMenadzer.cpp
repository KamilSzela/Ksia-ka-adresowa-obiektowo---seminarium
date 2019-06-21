#include "uzytkownikMenadzer.h"

int UzytkownikManadzer::pobierzIdNowegoUzytkownika()
{
    if (uzytkownicy.empty() == true)
        return 1;
    else
        return uzytkownicy.back().pobierzId() + 1;
}

Uzytkownik UzytkownikManadzer::podajDaneNowegoUzytkownika()
{
    Uzytkownik uzytkownik;

    uzytkownik.ustawId(pobierzIdNowegoUzytkownika());

    do
    {
        cout << "Podaj login: ";
        string login;
        cin >> login;
        uzytkownik.ustawLogin(login);
    } while (czyIstniejeLogin( uzytkownik.pobierzLogin()) == true);

    cout << "Podaj haslo: ";
    string haslo;
    cin >> haslo;
    uzytkownik.ustawHaslo(haslo);

    return uzytkownik;
}
void UzytkownikManadzer::rejestracjaUzytkownika()
{
    Uzytkownik uzytkownik = podajDaneNowegoUzytkownika();

    uzytkownicy.push_back(uzytkownik);
    plikzUzytkownikami.dopiszUzytkownikaDoPliku(uzytkownik);

    cout << endl << "Konto zalozono pomyslnie" << endl << endl;
    system("pause");
}

bool UzytkownikManadzer::czyIstniejeLogin(string login)
{
    for (int i = 0; i < uzytkownicy.size(); i++)
    {
        if(uzytkownicy[i].pobierzLogin()==login)
        {
            cout << endl << "Istnieje uzytkownik o takim loginie." << endl;
            return true;
        }
    }
        return false;
}
void UzytkownikManadzer::wypiszWszystkichUzytkownikow()
{
     for (int i = 0; i < uzytkownicy.size(); i++)
    {
        cout<<uzytkownicy[i].pobierzId()<<endl;
        cout<<uzytkownicy[i].pobierzLogin()<<endl;
        cout<<uzytkownicy[i].pobierzHaslo()<<endl;
    }
}
void UzytkownikManadzer::wczytajUzytkownikowZPliku()
{
  uzytkownicy=plikzUzytkownikami.wczytajUzytkownikowZPliku();
}


