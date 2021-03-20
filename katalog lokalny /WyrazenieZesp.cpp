#include "WyrazenieZesp.hh"
#include "LZespolona.hh"
#include <iostream>
#include <cmath>
#include <cstring>
#include <fstream>

using namespace std;

/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */

LZespolona Oblicz(WyrazenieZesp WyrZ)
{
    switch (WyrZ.Op)
    {
    case Op_Dodaj:
    {
        return WyrZ.Arg1 + WyrZ.Arg2;
    }
    break;
    case Op_Odejmij:
    {
        return WyrZ.Arg1 - WyrZ.Arg2;
    }
    break;
    case Op_Mnoz:
    {
        return WyrZ.Arg1 * WyrZ.Arg2;
    }
    break;
    case Op_Dziel:
    {
        return WyrZ.Arg1 / WyrZ.Arg2;
    }
    break;
    }
}


// void Wyswietl(WyrazenieZesp WyrZ)
// {
       
//      cout << " " ;
//      cout << char(WyrZ.Op); 
//      cout << " " ; 
//      cout<< WyrZ.Arg2;
// }

// void Wczytaj(WyrazenieZesp WyrZ)
// {
//     cin >> WyrZ.Arg1 >> char(WyrZ.Op) >> WyrZ.Arg2;
// }

ostream & operator << (ostream & StrmWy, WyrazenieZesp & WyrZ)
{
    return StrmWy << WyrZ.Arg1 << " " << char(WyrZ.Op) << " " << WyrZ.Arg2;
}


istream & operator >> (istream & StrmWe, WyrazenieZesp & Wpom)
{
    // WyrazenieZesp OperChars[]={Op_Dodaj, Op_Odejmij, Op_Dziel, Op_Mnoz};
    char plusiminus='x';
    char const *OperChars="+-*/", *pomOperplusiminus;

    if (StrmWe.fail())
  {
    return StrmWe;
  }
    StrmWe >> Wpom.Arg1;
    if (StrmWe.fail())
  {
    return StrmWe;
  }
    StrmWe >> plusiminus;
    if (StrmWe.fail()) 
        return StrmWe;
    if ((pomOperplusiminus=strchr(OperChars,plusiminus)))
    {
      plusiminus  = OperChars[pomOperplusiminus - OperChars]; 
    }
    else 
    {
        StrmWe.setstate(ios::failbit);
    }
    // Wpom.Op = plus   iminus;
    return StrmWe;

    StrmWe >> Wpom.Arg2;
    if (StrmWe.fail())
    return StrmWe;


    if (StrmWe.fail()) return StrmWe;
        StrmWe.setstate(ios::failbit);
}








