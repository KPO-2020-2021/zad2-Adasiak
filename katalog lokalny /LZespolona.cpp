#include "LZespolona.hh"
// #include <iostream>
// #include <cmath>
// #include <iomanip>
// #include <fstream>
// #include <string>
// #define MIN_DIFF 0.00001;

// using namespace std;

void wyswietl(LZespolona skl)
{
   cout <<"(" << skl.re <<showpos << skl.im << noshowpos << "i)";
}

void wczytaj(LZespolona Skl1)
{
  char lnawias, pnawias, i, znak;
  cin >>lnawias >> Skl1.re >>znak >> Skl1.im >> i>> pnawias ;
}

ostream & operator << (ostream & StrmWy, const LZespolona & Lwy)
{
  return StrmWy << "(" << Lwy.re <<showpos << Lwy.im << noshowpos << "i)";
}

istream & operator >> (istream & StrmWe, LZespolona Ln)
{
  char nawias, litera;
  StrmWe >> nawias;
  if (StrmWe.fail())
    return StrmWe;
  if (nawias !='(')
  {
    StrmWe.setstate(ios::failbit);
    return StrmWe;
  }
    StrmWe >> Ln.re;
  if (StrmWe.fail())
  {
    return StrmWe;
  }
  StrmWe >> Ln.im;
  if (StrmWe.fail())
    return StrmWe;
  StrmWe >> litera;
  if (StrmWe.fail())
    return StrmWe;
  if (litera != 'i')
  {
    StrmWe.setstate(ios::failbit);
    return StrmWe;
  }
  StrmWe >> nawias;
  if (StrmWe.fail())
    return StrmWe;
  if (nawias != ')')
  {
    StrmWe.setstate(ios::failbit);
    return StrmWe;
  }
  return StrmWe;
}
   


//   if(StrWe.sync() !='(')
//   {
//     // StrWe.setstate();//czy tutaj powinna byc flaga ??
//     StrWe  >> Ln.re >> Ln.im; 
//   }
//   if(StrWe.sync() !='i') 
//   {
//     StrWe.setstate(StrWe.eofbit);
//   }
//   if(StrWe.sync()!=')')
//   {
//     StrWe.setstate(StrWe.eofbit);
//   }
//   return StrWe;
// }

/*!
 * Realizuje dodanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik dodawania,
 *    Skl2 - drugi skladnik dodawania.
 * Zwraca:
 *    Sume dwoch skladnikow przekazanych jako parametry.
 */

LZespolona Sprzezenie(LZespolona skl)
{
  skl.im*=-1;
  return skl;
}

/*Funkcja modol, funkcja pomocnicza przy dzieleniu liczb zespolonych*/
double modul2(LZespolona Skl2)
{
  return sqrt((pow(Skl2.re,2)) + (pow(Skl2.im,2),2));
}

/*Operator dodawania wykonuje dodawanie liczb zespolonych*/
LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re + Skl2.re;
  Wynik.im = Skl1.im + Skl2.im;
  return Wynik;
}

/*Operator odejmowania wykonuje odejmowanie liczb zespolonych*/

LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re - Skl2.re;
  Wynik.im = Skl1.im - Skl2.im;
  return Wynik;
}

/*Operator mnozenia wykonuje mnozenie liczb zespolonych*/


LZespolona  operator * (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = (Skl1.re * Skl2.re) - (Skl1.im * Skl2.im);
  Wynik.im = (Skl1.re * Skl2.im) + (Skl1.im * Skl2.re);
  return Wynik;
}

/*Operator dzielenie wykonuje dzielenie liczb zespolonych, wynkcja pomocnicza w tej operacji jest modul2*/


LZespolona operator / (LZespolona Skl2, double liczba)
{
  LZespolona  Wynik;
  if ((liczba==0))
  {
    cerr<<"Dzielenie przez 0, program konczy dzialanie."<<endl;
    exit(0);
  }
  else
  {
    Wynik.re=Skl2.re/liczba;
    Wynik.im=Skl2.im/liczba;
  }
  return Wynik;
}


LZespolona  operator / (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;
  if ((modul2(Skl2)==0))
  {
    cerr<<"Dzielenie przez (0+0i), program konczy dzialanie."<<endl;
    exit(0);
  }
  else
  {
    Wynik= (Skl1 * Sprzezenie(Skl2)) / pow(modul2(Skl2),2);
    return Wynik;
  }
}

bool operator == (LZespolona Skl1, LZespolona Skl2)
{
  if ((Skl1.re == Skl2.re) && (Skl1.im == Skl2.im))
  {
    return true ;
  }
  else 
  return false ;
}
// {
//   if ((abs(Skl1.re-Skl2.im) <= (MIN_DIFF)) && (abs(Skl1.im-Skl2.im) <= (MIN_DIFF)))
//       return true;
//     else
//       return false;
// }




