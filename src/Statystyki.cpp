#include "Statystyki.hh"


void Wyswietl(Statystyka stat)
{
    cout<<"Ilosc dobrych odpowiedzi:" <<stat.poprawne<<endl;
  cout<<"Ilosc blednych odpowiedzi: " <<stat.bledne<<endl;
  cout<<"Wynik procentowy poprawnych odpowiedzi:" <<stat.procent<<endl;
}

int PopOdp(Statystyka& St)
{
    return St.poprawne;
}

int ZlOdp(Statystyka& St)
{
    return St.bledne;
}

int StatProc(Statystyka& St)
{
    St.procent=((St.poprawne/(St.bledne+St.poprawne))*100);
    return St.procent;
}

void zerowanie(Statystyka & St)
{
    St.poprawne = 0;
    St.bledne = 0;
}

