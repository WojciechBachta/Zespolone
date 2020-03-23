
#ifndef STATYSTYKA_HH
#define STATYSTYKA_HH
#include <iostream>
using namespace std;

struct Statystyka
{
    int poprawne;
    int bledne;
    double procent;
};

void Wyswietl(Statystyka stat);

int PopOdp(Statystyka & St);

int ZlOdp(Statystyka & St);

void zerowanie(Statystyka & St);


#endif
