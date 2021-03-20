#ifndef STATYSTYKA_HH
#define STATYSTYKA_HH

#include <iostream>
#include <iomanip>

/*!
 *  Plik zawiera 
 */
// using namespace std;

struct score 
{
  double zpkt; // ilosc zdobytych pkt
  double iloscpytan; // ilosc pytan pobieranych z bazy testu 
};


void wyswietlwynik(score elem);


#endif
