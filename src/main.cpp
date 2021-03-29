#include <iostream>
#include "BazaTestu.hh"
#include "Statystyki.hh"

using namespace std;




int main(int argc, char **argv)
{

  if (argc < 2) {
    std::cout << endl;
    std::cout << " Brak opcji okreslajacej rodzaj testu." << endl;
    std::cout << " Dopuszczalne nazwy to:  latwy, trudny." << endl;
    std::cout << endl;
    return 1;
  }


  BazaTestu   BazaT = { nullptr, 0, 0 };

  if (InicjalizujTest(&BazaT,argv[1]) == false) {
    cerr << " Inicjalizacja testu nie powiodla sie." << endl;
    return 1;
  }


  
  std::cout << endl;
  std::cout << " Start testu arytmetyki zespolonej: " << argv[1] << endl;
  std::cout << endl;

  WyrazenieZesp   WyrZ_PytanieTestowe;
  // std::istream >> StrmWe;
  // istream StrmWe;
  // istream operator>>StrmWe;
  // std::ostream << StrmWy;
  // LZespolona ostream /*StrmWy*/;
  // LZespolona istream;
  // LZespolona StrmWe;
  // LZespolona StrmWy;
  // LZespolona LZesp_testpoprawnosci, LZesp_pytaniatestowe;
  // score final;
  // final.iloscpytan = BazaT.IloscPytan;
  // int pomylka;

  try{  
    while (PobierzNastpnePytanie(&BazaT,&WyrZ_PytanieTestowe)) {
      // cout << " Czesc rzeczywista pierwszego argumentu: ";
      std::cout << WyrZ_PytanieTestowe.Arg1.re << endl ;
      // operator << ();
      // // operator<< WyrZ_PytanieTestowe.Arg1.re;
      // cout << WyrZ_PytanieTestowe.Arg1.im/*<< endl*/;
      // // cout << WyrZ_PytanieTestowe.Arg2.re /*<< endl*/;
      // // cout << WyrZ_PytanieTestowe.Arg2.im /*<< endl*/;
      // while(StrmWe.fail ())
      // {
      //   cerr << " Blad formatu liczby zespolonej";
      //   StrmWe.clear();
      //   StrmWe.ignore(1000);
      //   std::cout << "Sproj ponownie: ";
      //   cin >> LZesp_pytaniatestowe;
      //   std::cout<<endl;
      //   pomylka++;
      // }
      // if (LZesp_pytaniatestowe == LZesp_testpoprawnosci)
      // {
      //   std::cout << "Poprawna odpowiedz gratulacje";
      //   final.zpkt++;
      //   StrmWe.clear();

      // }
      // else
      // {
      //   std::cout << "Bledna odpowiedz";
      // }
      // pomylka=0;
      // std::cout <<  endl;

      // }
    
    
    
    }
  }  
  catch(domain_error& e)
  {
    
    cout << " Dzielnie przez 0"  << e.what() << '\n';
  }



  
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
  //   while (StrmWej.fail() && pomylka < 2)
  //   {
  //     cerr << ":! Niepoprawna forma liczby zespolonej, wprowadz ponownie";
  //     StrmWej.clear();
  //     StrmWej.ignore(100, "\n");
  //     StrmWej >> LZesp_pytaniatestowe;
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
