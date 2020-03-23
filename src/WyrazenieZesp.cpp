#include "WyrazenieZesp.hh"
#include "LZespolona.hh"

using namespace std;

ostream& operator << (ostream& wyj, const Operator& Op)
{
    switch(Op)
    {
        case Op_Dodaj: wyj << "+";
            break;
        case Op_Dziel: wyj << "/";
            break;
        case Op_Mnoz: wyj << "*";
            break;
        case Op_Odejmij: wyj << "-";
            break;
    }
    return wyj;
}

ostream& operator << (ostream& wyj,const WyrazenieZesp& z)
{
    wyj << z.Arg1 << z.Op << z.Arg2;
    return wyj;
}

istream& operator >> (istream& wej, Operator& Op)
{
    char znak;
    wej >> znak;
    switch(znak)
    {
        case '+': Op = Op_Dodaj;
            break;
        case '/': Op = Op_Dziel;
            break;
        case '*': Op = Op_Mnoz;
            break;
        case '-': Op = Op_Odejmij;
            break;
    default: wej.setstate(std::ios::failbit);
    }
    return wej;
}

istream& operator >> (istream& wej, WyrazenieZesp& z)
{
    wej >> z.Arg1 >> z.Op >> z.Arg2;
    return wej;
}

  void Wyswietl(WyrazenieZesp z)
 {
     cout<<"(";
     if(z.Arg1.im<0)
     {
         cout<<z.Arg1.re<<z.Arg1.im<<"i";
     }
     else
     {
         cout<<z.Arg1.re<<"+"<<z.Arg1.im<<"i";
     }
     cout<<")";
    switch(z.Op)
    {
    case Op_Dodaj: std::cout << "+";
        break;
    case Op_Dziel: std::cout << "/";
        break;
    case Op_Mnoz: std::cout << "*";
        break;
    case Op_Odejmij: std::cout << "-";
        break;
    }
     cout<<"(";
     if(z.Arg2.im<0)
     {
         cout<<z.Arg2.re<<z.Arg2.im<<"i";
     }
     else
     {
         cout<<z.Arg2.re<<"+"<<z.Arg2.im<<"i";
     }
     cout<<")";
 }

 LZespolona oblicz(WyrazenieZesp z)
 {

 switch(z.Op)
 {
    case Op_Dodaj: return z.Arg1 + z.Arg2;
    case Op_Odejmij: return z.Arg1 - z.Arg2;
    case Op_Mnoz   : return z.Arg1 * z.Arg2;
    case Op_Dziel  : return z.Arg1 / z.Arg2;
 }




 }


/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */

