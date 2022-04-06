#include <iostream>

using namespace std;

class pracownik
{
public:
    string imie;
    string nazwisko;
    float pensja;
    float premia;
    float pensja_brutto;

    pracownik(string i, string n, float pen, float pre, float penb);
    void wypisz();

    friend void sprawdz(pracownik p);
};

pracownik::pracownik(string i="Jan", string n="Kowalski", float pen=1000, float pre=2, float penb=1)
    {
        imie=i;
        nazwisko=n;
        pensja=pen;
        premia=pre;
        pensja_brutto=penb;
    }

 void sprawdz(pracownik p)
    {

    if((p.imie=="Jan")&&(p.nazwisko=="Kowalski"))
    {
        p.premia=85;
        p.pensja_brutto=((p.premia/100)*p.pensja)+p.pensja;
        cout<<"Pensja brutto dla Kowalskiego to: "<<p.pensja_brutto;
    }
    }
    void pracownik::wypisz()
    {
        cout<<"Imie pracownika: "<<imie<<endl;
        cout<<"Nazwisko pracownika: "<<nazwisko<<endl;
        cout<<"Pensja pracownika: "<<pensja<<endl;
        cout<<"Premia pracownika: "<<premia<<endl;
        cout<<"Pensja brutto pracownika: "<<pensja_brutto<<endl;
    }
int main()
{
    pracownik P1,P2;
    sprawdz(P1);
        pracownik::wypisz();
}
