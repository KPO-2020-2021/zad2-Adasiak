#ifndef STATYSTYKI_HH
#define STATYSTYKI_HH

#include "BazaTestu.hh"
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
void dobraodp(score elem);

#endif

// #ifndef STATYSTYKI_HH
// #define STATYSTYKI_HH

// #include <iostream>
// #include <iomanip>

// /*!
//  *  Plik zawiera 
//  */
// // using namespace std;

// struct score 
// {
//   double zpkt; // ilosc zdobytych pkt
//   double iloscpytan; // ilosc pytan pobieranych z bazy testu 
// };


// void wyswietlwynik(score elem);


// #endif