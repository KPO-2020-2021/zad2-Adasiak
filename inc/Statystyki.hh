#ifndef STATYSTYKI_HH
#define STATYSTYKI_HH

#include "BazaTestu.hh"
#include <iostream>
#include <iomanip>

/*!
 *  Plik zawiera 
 */


struct score 
{
  double zpkt; // ilosc zdobytych pkt
  double iloscpytan; // ilosc pytan pobieranych z bazy testu 

  void wyswietlwynik()const;
  void dobraodp();

};

#endif
