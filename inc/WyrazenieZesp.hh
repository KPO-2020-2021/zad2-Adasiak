#ifndef WYRAZENIEZESP_HH
#define WYRAZENIEZESP_HH

#include <iostream>gi
#include "LZespolona.hh"


using namespace std;
/*!
 * Modeluje zbior operatorow arytmetycznych.
 */

enum Operator
{
  Op_Dodaj = '+',
  Op_Odejmij = '-',
  Op_Mnoz = '*',
  Op_Dziel = '/'
};

/*
 * Modeluje pojecie dwuargumentowego wyrazenia zespolonego
 */
struct WyrazenieZesp
{
  LZespolona Arg1; // Pierwszy argument wyrazenia arytmetycznego
  Operator Op;     // Opertor wyrazenia arytmetycznego
  LZespolona Arg2; // Drugi argument wyrazenia arytmetycznego

  LZespolona Oblicz(WyrazenieZesp WyrZ);

};

ostream & operator <<(ostream &StrmWy, WyrazenieZesp WyrZ);

istream & operator >>(istream &StrWe, WyrazenieZesp &Wpom);

#endif
