#include <iostream>
#include "BazaTestu.hh"
#include "Statystyki.hh"
#include "LZespolona.hh"
#include "WyrazenieZesp.hh"

using namespace std;


// ./a.out latwy
// argc 2
// argv ./a.out latwy
// argv[1] latwy
// argv[1][2] t





int main(int argc, char **argv)
{

  /*  LZespolona A1={4,5};
    LZespolona A2={5,-6};

      Wyswietl(A1+A2);
        cout << endl;
      Wyswietl(A1-A2);
        cout << endl;
      Wyswietl(A1*A2);
        cout << endl;
      Wyswietl(A1/A2);
*/


  if (argc < 2) {
    cout << endl;
    cout << " Brak opcji okreslajacej rodzaj testu." << endl;
    cout << " Dopuszczalne nazwy to:  latwy, trudny." << endl;
    cout << endl;
    return 1;
  }


  BazaTestu   BazaT = { nullptr, 0, 0 };

  BazaT.wskTabTestu=nullptr;
  BazaT.IloscPytan=0;
  BazaT.IndeksPytania=0;


  if (InicjalizujTest(&BazaT,argv[1]) == false) {
    cerr << " Inicjalizacja testu nie powiodla sie." << endl;
    return 1;
  }



  cout << endl;
  cout << " Start testu arytmetyki zespolonej: " << argv[1] << endl;
  cout << endl;

WyrazenieZesp   WyrZ_PytanieTestowe;
Statystyka Staty{0,0};
LZespolona Odp;


  while (PobierzNastpnePytanie(&BazaT,&WyrZ_PytanieTestowe)) {
    cout << " Podaj wynik: " << WyrZ_PytanieTestowe << "\n Twoja Odpowiedz:";
    cin >> Odp;
    if(Odp == oblicz(WyrZ_PytanieTestowe))
    {
        Staty.poprawne++;
        cout << "Poprawna odpowiedz \n \n";
    }
    else
    {
        Staty.bledne++;
        cout << "Bledna odpowiedz \n\n";
    }


  }


  cout << endl;
  cout << " Koniec testu" << endl;
  cout << endl;

}

