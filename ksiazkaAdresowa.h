#include <iostream>
#include <vector>
#include "uzytkownik.h"

using namespace std;

class KsiazkaAdresowa
{
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;

    vector <Uzytkownik> uzytkownicy;
public:
    void rejestracjaUzytkownika();
};
