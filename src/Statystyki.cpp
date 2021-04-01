#include "Statystyki.hh"
#include <iostream>
#include <iomanip>

using namespace std;

/*metoda wyswietlajaca wynik uzyskany przez uzytkownika*/
void score::wyswietlwynik()const
{
    if(this->zpkt<1)
    {
        cout << "Poprawne odpowiedzi :" << "0" << "/" << this->iloscpytan << endl;
        cout << "Wynik procentowy:" << fixed << setprecision(1) << this->zpkt/this->iloscpytan *100 << "%" << endl;
    }
    else
    {
        cout << "Poprawne odpowiedzi :" << this->zpkt << "/" << this->iloscpytan << endl;
        cout << "Wynik procentowy:" << fixed << setprecision(1) << this->zpkt/this->iloscpytan *100 << "%" << endl;
    }
}

/*metoda zliczajaca poprawne odpowiedzi uzytkownika*/
void score::dobraodp()
{
    this->zpkt++;
}
