#ifndef LZESPOLONA_HH
#define LZESPOLONA_HH

#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>
// #include <> // w razie w jakby nie dzialalo to zamiast cmath 
#define MIN_DIFF 0.00001

/*!
 *  Plik zawiera definicje struktury LZesplona oraz zapowiedzi
 *  przeciazen operatorow arytmetycznych dzialajacych na tej 
 *  strukturze.
 */

using namespace std;

/*!
 * Modeluje pojecie liczby zespolonej
 */
struct  LZespolona {
  double   re;    /*! Pole repezentuje czesc rzeczywista. */
  double   im;    /*! Pole repezentuje czesc urojona. */


  LZespolona Sprzezenie();
  double modul2();

  LZespolona operator + (LZespolona  Skl2);
  LZespolona operator - (LZespolona Skl2);
  LZespolona operator * (LZespolona Skl2);
  LZespolona operator / (LZespolona Skl2);
  LZespolona operator * (double liczba); 
  LZespolona operator / (double liczba);
  
  bool operator == (const LZespolona Skl2) const ;

};

/*
 * Dalej powinny pojawic sie zapowiedzi definicji przeciazen operatorow
 */

double arg(LZespolona skl );

LZespolona  operator += (LZespolona & Skl1, const LZespolona & Arg2);
LZespolona  operator /= (LZespolona & Skl1, const LZespolona & Arg2);

ostream & operator << (ostream & StrmWy, LZespolona  Lwy);
istream & operator >> (istream & StrmWe , LZespolona & Ln);

#endif

