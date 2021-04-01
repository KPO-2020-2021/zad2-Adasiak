#include "WyrazenieZesp.hh"
#include <iostream>
#include <cstring>

using namespace std;


LZespolona WyrazenieZesp::Oblicz(WyrazenieZesp WyrZ)
{
  LZespolona wynik;
    switch (WyrZ.Op)
    {
    case Op_Dodaj:
    {
        wynik= WyrZ.Arg1 + WyrZ.Arg2;
    }
    break;
    case Op_Odejmij:
    {
        wynik= WyrZ.Arg1 - WyrZ.Arg2;
    }
    break;
    case Op_Mnoz:
    {
        wynik= WyrZ.Arg1 * WyrZ.Arg2;
    }
    break;
    case Op_Dziel:
    {
        wynik= WyrZ.Arg1 / WyrZ.Arg2;
    }
    break;
    }
    return wynik;
}

/*operator strurumienia wyjsciowego wyrazenia zespolonego*/
ostream & operator << (ostream & StrmWy, WyrazenieZesp  WyrZ)
{
    return StrmWy << WyrZ.Arg1 << " " << char(WyrZ.Op) << " " << WyrZ.Arg2;
}

/*operator strurumienia wejsciowego wyrazenia zespolonego*/
istream & operator >> (istream & StrmWej, WyrazenieZesp & Wpom)
{
    char plusiminus='x';
    char const *OperChars="+-*/", *pomOperplusiminus;

    if (StrmWej.fail())
  {
    return StrmWej;
  }
    StrmWej >> Wpom.Arg1;
    if (StrmWej.fail())
  {
    return StrmWej;
  }
    StrmWej >> plusiminus;
    if (StrmWej.fail()) 
        return StrmWej;
    if ((pomOperplusiminus=strchr(OperChars,plusiminus)))
    {
      plusiminus  = OperChars[pomOperplusiminus - OperChars]; 
    }
    else 
    {
        StrmWej.setstate(ios::failbit);
    }
    if (StrmWej.fail())
    {
      return StrmWej;
    }
    StrmWej >> Wpom.Arg2;
    if (StrmWej.fail())
    return StrmWej;


    return StrmWej;

}
