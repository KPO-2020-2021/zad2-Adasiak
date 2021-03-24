#include <iostream>
#include "BazaTestu.hh"
#include "Statystyka.hh"
#include <fstream>


using namespace std;

int main(int argc, char **argv)
{

  if (argc < 2)
  {
    cout << endl;
    cout << " Brak opcji okreslajacej rodzaj testu." << endl;
    cout << " Dopuszczalne nazwy to:  latwy, trudny." << endl;
    cout << endl;
    return 1;
  }

  BazaTestu BazaT = {nullptr, 0, 0};

  if (InicjalizujTest(&BazaT, argv[1]) == false)
  {
    cerr << " Inicjalizacja testu nie powiodla sie." << endl;
    return 1;
  }

  cout << endl;
  cout << " Start testu arytmetyki zespolonej: " << argv[1] << endl;
  cout << endl;

  WyrazenieZesp WyrZ_PytanieTestowe;
  // LZespolona LZesp_testpoprawnosci, LZesp_pytaniatestowe;
  // score final;
  // final.iloscpytan = BazaT.IloscPytan;
  // int pomylka;

  while (PobierzNastpnePytanie(&BazaT, &WyrZ_PytanieTestowe))
  {
    cout << " Czesc rzeczywista pierwszego argumentu: ";
    cout << WyrZ_PytanieTestowe.Arg1.re << endl;
    cout << "Twoja odpowiedz:";
  }
  // wyswietlwynik(final);
  cout << endl;
  cout << " Koniec testu" << endl;
  cout << endl;
  // wyswietlwynik(final);


  //test

  // while (PobierzNastpnePytanie(&BazaT, &WyrZ_PytanieTestowe))
  // {
  //   LZesp_testpoprawnosci=Oblicz(WyrZ_PytanieTestowe);
  //   cout << " Czesc rzeczywista pierwszego argumentu: ";
  //   cout << WyrZ_PytanieTestowe << endl;
  //   cout << "Twoja odpowiedz:";
  //   cin >> LZesp_pytaniatestowe;
  //   while (StrmWe.fail() && pomylka < 2)
  //   {
  //     cerr << ":! Niepoprawna forma liczby zespolonej, wprowadz ponownie";
  //     StrmWe.clear();
  //     StrmWe.ignore(100, "\n");
  //     StrmWe >> LZesp_pytaniatestowe;
  //     cout << endl;
  //     pomylka++;

  //   }
  //   if (LZesp_pytaniatestowe == LZesp_testpoprawnosci)
  //   {
  //     cout << "Gratulacje poprawna odpowiedz :)" <<endl;
  //     final.zpkt++;
  //   }
  //   else
  //   {
  //     cout << "Bledna odpowiedz :( Zobacz poprawny wynik:";
  //     StrmWy << LZesp_testpoprawnosci << endl;
  //   }
  //   pomylka=0;

  // }



}
