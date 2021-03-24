#include "Statystyki.hh"
#include <iostream>
#include <iomanip>

using namespace std;

void wysietlwynik(score elem)
{
    cout << "Poprawne odpowiedzi :" << elem.zpkt << "/" << elem.iloscpytan << endl;
    cout << "Wynik procentowy:" << fixed << setprecision(1) << elem.zpkt/elem.iloscpytan *100 << "%" << endl;
}

void dobraodp(score elem)
{
    elem.zpkt++;
}
// #include "Statystyki.hh"


// /*
//  * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
//  * w pliku naglowkowym.
//  */
