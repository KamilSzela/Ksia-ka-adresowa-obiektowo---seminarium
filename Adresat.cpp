#include "Adresat.h"

    void Adresat::ustawId(int noweID)
    {
        id = noweID;
    }
    void Adresat::ustawIdUzytkownika(int noweIDUzytkownika)
    {
        idUzytkownika = noweIDUzytkownika;
    }
    void Adresat::ustawImie(string noweImie)
    {
        imie = noweImie;
    }
    void Adresat::ustawNazwisko(string noweNazwisko)
    {
        nazwisko = noweNazwisko;
    }
    void Adresat::ustawNumerTelefonu(string nowyNumer)
    {
        numerTelefonu = nowyNumer;
    }
    void Adresat::ustawEmail(string nowyEmail)
    {
        email = nowyEmail;
    }
    void Adresat::ustawAdres(string nowyAdres)
    {
        adres = nowyAdres;
    }
    int Adresat::pobierzId()
    {
        return id;
    }
    int Adresat::pobierzIdUzytkownika()
    {
        return idUzytkownika;
    }
    string Adresat::pobierzImie()
    {
        return imie;
    }
    string Adresat::pobierzNazwisko()
    {
        return nazwisko;
    }
    string Adresat::pobierzNumerTelefonu()
    {
        return numerTelefonu;
    }
    string Adresat::pobierzEmail()
    {
        return email;
    }
    string Adresat::pobierzAdres()
    {
        return adres;
    }
