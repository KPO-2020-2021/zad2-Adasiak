#include "WyrazenieZesp.hh"
// #include "LZespolona.hh"

#include <iostream>
// #include <cmath>
#include <cstring>
// #include <fstream>

using namespace std;

/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */

LZespolona Oblicz(WyrazenieZesp WyrZ)
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

ostream & operator << (ostream & StrmWy, WyrazenieZesp  WyrZ)
{
    return StrmWy << WyrZ.Arg1 << " " << char(WyrZ.Op) << " " << WyrZ.Arg2;
}


istream &operator>> (istream & StrmWej, WyrazenieZesp & Wpom)
{
    // WyrazenieZesp OperChars[]={Op_Dodaj, Op_Odejmij, Op_Dziel, Op_Mnoz};
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
    // Wpom.Op = plus   iminus;
    // return StrmWe;

    if (StrmWej.fail())
  {
    return StrmWej;
  }
    StrmWej >> Wpom.Arg2;
    if (StrmWej.fail())
    return StrmWej;


    return StrmWej;

    // if (StrmWe.fail()) return StrmWe;
    //     StrmWe.setstate(ios::failbit);
}



// istream & operator >>(istream &StrWe, WyrazenieZesp &WyrZ)
// {
//     char znak;
//     StrWe >> (WyrZ.Arg1);
//     StrWe >> znak;
//     switch (znak)
//     {
//     case '+':
//         WyrZ.Op = Op_Dodaj;
//         break;
//     case '-':
//         WyrZ.Op = Op_Odejmij;
//         break;
//     case '*':
//         WyrZ.Op = Op_Mnoz;
//         break;
//     case '/':
//         WyrZ.Op = Op_Dziel;
//         break;
//     default:
//         StrWe.setstate(ios::failbit);
//         break;
//     }
//     StrWe >> WyrZ.Arg2;
//     return StrWe;
// }









// #include "WyrazenieZesp.hh"


// /*
//  * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
//  * w pliku naglowkowym.
//  */
