#ifndef LZESPOLONA_HH
#define LZESPOLONA_HH

#include <iostream>
using namespace std;
/*!
 *  Plik zawiera definicje struktury LZesplona oraz zapowiedzi
 *  przeciazen operatorow arytmetycznych dzialajacych na tej
 *  strukturze.
 */


/*!
 * Modeluje pojecie liczby zespolonej
 */
struct  LZespolona {
  double   re;    /*! Pole repezentuje czesc rzeczywista. */
  double   im;    /*! Pole repezentuje czesc urojona. */
};

/*
 * Dalej powinny pojawic sie zapowiedzi definicji przeciazen operatorow
 */
void Wyswietl(LZespolona);

LZespolona stworz(double r, double i);
istream& operator >> (istream& wej, LZespolona& Z);
ostream& operator << (ostream& wyj, const LZespolona& Z);

LZespolona Sprzezenie(LZespolona);
double Modul2(LZespolona);


LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator * (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator / (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator / (LZespolona  Skl1,  double  Skl2);

bool  operator == (LZespolona  Skl1,  LZespolona  Skl2);

bool  operator != (LZespolona  Skl1,  LZespolona  Skl2);

#endif

