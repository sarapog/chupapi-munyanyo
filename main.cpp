#include <iostream>

using namespace std;

class pacjent
{
public:
    string imie;
    string nazwisko;
    int wiek;
    int wzrost;
    string plec;

    pacjent(string im, string naz, int w, int wz. string p);
    void wczytaj();
    void wypisz();
};
pacjent::pacjent(string im="Jan", string naz="Kowalski", int w=30, int wz=175, string p="M")
{
    imie=im;
    nazwisko=naz;
    wiek=w;
    wzrost=wz;
    plec=p;

}
void pacjent::wypisz()
{
    cout<<"Podaj imie: "<<imie;
    cout<<"Podaj nazwisko: "<<nazwisko;
    cout<<"Podaj wiek: "<<wiek;
    cout<<"Podaj wzrost: "<<wzrost;
    cout<<"Podaj plec: "<<plec;
}
int main()
{
    pacjent p1;
    p1.wypisz():
        return 0;
}
