#include <iostream>

using namespace std;

class renault
{
public:
    string nr_silnika;

    renault(string nr="RN15")
    {
        nr_silnika=nr;
        cout<<"watrosc: "<<nr_silnika<<endl;
    }
    friend class volvo;
    void wyswietl()
    {
        cout<<"wrtosc wynosi: "<<nr_silnika<<endl;
    }


};

class volvo
{
public:
    void zmien(renault &p)
    {
        cout<<"dostalismy od klasy wartosc: "<<p.nr_silnika<<endl;
        p.nr_silnika="VV20";
        cout<<"Po zmianach: "<<p.nr_silnika<<endl;
    }
};


int main()
{
    renault P1;
    volvo B1;
    B1.zmien(P1);
    P1.wyswietl();


}
