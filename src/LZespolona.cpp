#include "LZespolona.hh"
#include <cmath>
#define MIN_DIFF 0.00001

using namespace std;

/*operator strumienia wyjsciowy liczby zespolonej*/
ostream & operator << (ostream & StrmWy,  LZespolona  Lwy)
{
  return StrmWy << "(" << Lwy.re <<showpos << Lwy.im << noshowpos << "i)";
}

/*operator strumienia wejsciowego liczby zespolonej*/
istream & operator >> (istream & StrmWe, LZespolona &Ln)
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


/*Funkcja sprzezenie, funkcja pomocnicza przy dzieleniu liczb zespolonych*/
  LZespolona LZespolona::Sprzezenie()
{
  this->im*=-1;
  return *this;
}

/*Funkcja modul, funkcja pomocnicza przy dzieleniu liczb zespolonych*/
double LZespolona::modul2()
{
  return  sqrt( pow(this->re,2) + pow(this->im,2));
}

// /*Operator dodawania wykonuje dodawanie liczb zespolonych*/

LZespolona  LZespolona::operator + (LZespolona  Skl2)
{
  Skl2.re += this->re;
  Skl2.im += this->im;

  return Skl2;
}

/*Operator odejmowania wykonuje odejmowanie liczb zespolonych*/

LZespolona  LZespolona::operator - (LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = this->re - Skl2.re;
  Wynik.im = this->im - Skl2.im;
  return Wynik;
}

/*Operator mnozenia wykonuje mnozenie liczb zespolonych*/

LZespolona  LZespolona::operator * (/*LZespolona  Skl1,*/  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = (Skl2.re * this->re) - (Skl2.im * this->im);
  Wynik.im = (Skl2.im * this->re) + (Skl2.re * this->im);

  return Wynik;
}


/*Operator mnozenia wykonuje mnozenie liczby zespolonej przez liczbe*/

LZespolona  LZespolona::operator * (/*LZespolona  Skl1,  LZespolona  Skl2*/ double liczba)
{
  LZespolona  Wynik;

  Wynik.re = this->re * liczba ;
  Wynik.im = this->im * liczba;
  // Wynik.im = (Skl1.re * Skl2.im) + (Skl1.im * Skl2.re);
  return Wynik;
}

/*Operator dzielenie wykonuje dzielenie liczb zespolonych, wynkcja pomocnicza w tej operacji jest modul2*/

LZespolona LZespolona::operator / (double liczba)
{
  LZespolona  Wynik;
  if ((liczba<=(MIN_DIFF)))
  {
    // cerr<<"Dzielenie przez 0,22222 program konczy dzialanie."<<endl;
    // throw std::domain_error("dzielnie prze 0");
    exit(0);
  }
  else
  {
    Wynik.re=this->re/liczba;
    Wynik.im=this->im/liczba;
  }
  return Wynik;
}


LZespolona  LZespolona::operator / (LZespolona  Skl2)
{
  LZespolona  Wynik;

  if ((Skl2.modul2())<=(MIN_DIFF)) 
  {
    throw std::domain_error("dzielnie prze 01111");
  }
  else
  {
    Wynik = (*this * Skl2.Sprzezenie())/ pow(Skl2.modul2(),2);
    return Wynik;
  }
}


bool LZespolona::operator == (const LZespolona Skl2) const
{
  if ((abs(this->re - Skl2.re ) <= (MIN_DIFF)) && (abs(this->im - Skl2.im ) <= (MIN_DIFF)))
        return true;
    else
      return false;
}

/*funckja liczaca argument glowny liczby zespolonej
, do funkcji sa testy ale nie jestem ich pewien*/
double arg(LZespolona skl)
{
  double kat;
  if(skl.re)
  {
    if(skl.im > 0.5)
      kat = 0.5 * M_PI;
    if(skl.im < 0.5)
      kat = -0.5 * M_PI;
    if(skl.im == 0)
      throw runtime_error("kat nieznany");
  }
  else
  {
    if(skl.re > 0.5)
      kat = atan2(skl.im, skl.re);
    if(skl.re < 0.5)
      kat = atan2(skl.im, skl.re) + M_PI;
  }
  cout<<kat<<endl;
  return kat;
}


/*Funkcja sprawdzajaca*/
LZespolona  operator += (LZespolona & Arg1, const LZespolona & Arg2){
  return Arg1 = Arg1 + Arg2;
}

/*Funkcja sprawdzajaca*/
LZespolona  operator /= (LZespolona & Arg1, const LZespolona & Arg2){
  return Arg1 = Arg1 / Arg2;
}



