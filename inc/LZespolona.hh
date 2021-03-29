#ifndef LZESPOLONA_HH
#define LZESPOLONA_HH

#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>
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


// public:
  LZespolona Sprzezenie(/*LZespolona skl*/);
  
  double modul2();

  // LZespolona operator + (/*LZespolona  Skl1,*/  LZespolona  Skl2);
  // LZespolona operator - (/*LZespolona Skl1,*/ LZespolona Skl2);
  // LZespolona operator * (/*LZespolona Skl1,*/ LZespolona Skl2);
  // LZespolona operator / (/*LZespolona Skl1,*/ LZespolona Skl2);
  // LZespolona operator / (LZespolona Skl2, double liczba);
  // LZespolona Sprzezenie(LZespolona skl);
  // void Sprzezenie();

};


/*
 * Dalej powinny pojawic sie zapowiedzi definicji przeciazen operatorow
 */

//void wyswietl(LZespolona );
// double modul2(LZespolona Skl2);

LZespolona operator + (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona operator - (LZespolona Skl1, LZespolona Skl2);
LZespolona operator * (LZespolona Skl1, LZespolona Skl2);
LZespolona operator / (LZespolona Skl1, LZespolona Skl2);
LZespolona operator / (LZespolona Skl2, double liczba);
// LZespolona Sprzezenie(LZespolona skl);

bool operator == (LZespolona Skl1, LZespolona Skl2);


void wyswietl(LZespolona skl);
void wczytaj(LZespolona Skl1 );

ostream & operator << (ostream & StrmWy, LZespolona  Lwy);
istream & operator >> (istream & StrmWe , LZespolona & Ln);

#endif


// #ifndef LZESPOLONA_HH
// #define LZESPOLONA_HH

// /*!
//  *  Plik zawiera definicje struktury LZesplona oraz zapowiedzi
//  *  przeciazen operatorow arytmetycznych dzialajacych na tej 
//  *  strukturze.
//  */


// /*!
//  * Modeluje pojecie liczby zespolonej
//  */
// struct  LZespolona {
//   double   re;    /*! Pole repezentuje czesc rzeczywista. */
//   double   im;    /*! Pole repezentuje czesc urojona. */
// };


// /*
//  * Dalej powinny pojawic sie zapowiedzi definicji przeciazen operatorow
//  */

// bool  operator == (LZespolona  Skl1,  LZespolona  Skl2);

// LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2);

// LZespolona operator / (LZespolona Skl1, double Skl2);

// #endif
