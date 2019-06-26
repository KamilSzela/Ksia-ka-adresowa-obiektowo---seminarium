#include "metodyPomocnicze.h"

string MetodyPomocnicze::konwerjsaIntNaString(int liczba)
{
    ostringstream ss;
    ss << liczba;
    string str = ss.str();
    return str;
}
int MetodyPomocnicze::konwersjaStringNaInt(string liczba)
{
    int liczbaInt;
    istringstream iss(liczba);
    iss >> liczbaInt;

    return liczbaInt;
}
string MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst)
{
    if (!tekst.empty())
    {
        transform(tekst.begin(), tekst.end(), tekst.begin(), ::tolower);
        tekst[0] = toupper(tekst[0]);
    }
    return tekst;
}
 string MetodyPomocnicze::wczytajLinie()
 {
     cin.sync();
     string tekst;
     getline(cin,tekst);
     return tekst;
 }
 char MetodyPomocnicze::wczytajZnak()
 {
     string wejscie = "";
     char znak = {0};
     while (true)
     {
         cin.sync();
         getline(cin,wejscie);
         if(wejscie.length()==1)
         {
             znak = wejscie[0];
             return znak;
         }
         else
            cout << "To nie jest pojedynczy znak. Wpisz ponownie: ";
     }
 }
int MetodyPomocnicze::wczytajLiczbe()
{
    int liczba;
    string wejscie = "";
    while(true)
    {
        getline(cin,wejscie);
        stringstream mystream(wejscie);
        if(mystream >> liczba)
            break;
        cout<<"To nie jest liczba. Sprobuj ponownie."<< endl;
    }
    return liczba;
}
