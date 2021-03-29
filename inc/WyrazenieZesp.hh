#ifndef WYRAZENIEZESP_HH
#define WYRAZENIEZESP_HH

#include <iostream>
// #include <fstream>
#include "LZespolona.hh"
// #include <cstring>
// #include <string>
// #include <iomanip>

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
};

/*
 * Funkcje ponizej nalezy zdefiniowac w module.
 *
 */
void Wyswietl(WyrazenieZesp WyrZ);

void Wczytaj(WyrazenieZesp WyrZ);

LZespolona Oblicz(WyrazenieZesp WyrZ);

ostream & operator <<(ostream &StrmWy, WyrazenieZesp WyrZ);

istream & operator >>(istream &StrWe, WyrazenieZesp &Wpom);

#endif
