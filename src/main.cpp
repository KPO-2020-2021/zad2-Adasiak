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
  LZespolona LZesp_testpoprawnosci, LZesp_pytaniatestowe;
  score final;
  final.iloscpytan = BazaT.IloscPytan;
  int pomylka;


while (PobierzNastpnePytanie(&BazaT,&WyrZ_PytanieTestowe)) 
    {
      pomylka=0;
      LZesp_testpoprawnosci= WyrZ_PytanieTestowe.Oblicz(WyrZ_PytanieTestowe);
      std::cout << WyrZ_PytanieTestowe << endl ;
      std::cout << "Podaj odpowiedz:" << endl ;
      std::cin >> LZesp_pytaniatestowe;
         while(cin.fail() && pomylka<2)
        {
          cout <<"    " <<"Blad formatu liczby zespolonej" << endl;
          pomylka++;
          cout <<"    "<< "Pozostaly ci: "<< (3-pomylka) <<" "<< "proby" << endl; 
          cin.clear();
          cin.ignore(1000000,'\n');
          std::cout <<"    "  << "Sproj ponownie : " << endl;
          cout <<"    ";
          cin >> LZesp_pytaniatestowe;
          std::cout<<endl;
        }
        if (LZesp_pytaniatestowe == LZesp_testpoprawnosci)
        {
          std::cout << "Poprawna odpowiedz gratulacje :)" <<endl;
          final.zpkt++;
          cin.clear();

        }
        else
        {
          std::cout << "Bledna odpowiedz :(" << endl;
          cin.clear();
          cin.ignore(1000000,'\n');
        }

        std::cout <<  endl;

      }



  try{  
    
        
  }  
  catch(domain_error& e)
  {
    
    cout << " Dzielnie przez 0"  << e.what() << '\n';
  }

  
  cout << endl;
  cout << " Koniec testu" << endl;
  cout << " Twoj wynik to:" << "     ";
  final.wyswietlwynik();
  cout << endl;

}
