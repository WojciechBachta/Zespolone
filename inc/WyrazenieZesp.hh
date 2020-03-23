#ifndef WYRAZENIEZESP_HH
#define WYRAZENIEZESP_HH

#include <iostream>
using namespace std;

#include "LZespolona.hh"


/*!
 * Modeluje zbior operatorow arytmetycznych.
 */
enum Operator { Op_Dodaj, Op_Odejmij, Op_Mnoz, Op_Dziel };



/*
 * Modeluje pojecie dwuargumentowego wyrazenia zespolonego
 */
struct WyrazenieZesp {
  LZespolona   Arg1;   // Pierwszy argument wyrazenia arytmetycznego
  Operator     Op;     // Opertor wyrazenia arytmetycznego
  LZespolona   Arg2;   // Drugi argument wyrazenia arytmetycznego
};


/*
 * Funkcje ponizej nalezy zdefiniowac w module.
 *
 */
ostream& operator << (ostream& wyj, const Operator& Op);

ostream& operator << (ostream& wyj, const WyrazenieZesp& WyrZ);

istream& operator >> (istream& wej, Operator& Op);

istream& operator >> (istream& wej, WyrazenieZesp& WyrZ);

LZespolona oblicz(WyrazenieZesp  WyrZ);

void Wyswietl(WyrazenieZesp  WyrZ);

#endif

