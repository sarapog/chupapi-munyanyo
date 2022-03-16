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

    pacjent(string im, string naz, int w, int wz, string p);
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
    cout<<"Podaj imie: "<<imie<<endl;
    cout<<"Podaj nazwisko: "<<nazwisko<<endl;
    cout<<"Podaj wiek: "<<wiek<<endl;
    cout<<"Podaj wzrost: "<<wzrost<<endl;
    cout<<"Podaj plec: "<<plec<<endl;
}
int main()
{
    pacjent p1;
    p1.wypisz();
        return 0;
}
