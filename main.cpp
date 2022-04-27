#include <iostream>

using namespace std;

class pentagon
{
public:
    string F_35;

    pentagon(string f="jawny")
    {
        F_35=f;
        cout<<"watrosc: "<<F_35<<endl;
    }
    friend class bialy_dom;
    void wyswietl()
    {
        cout<<"wrtosc wynosi: "<<F_35<<endl;
    }


};

class bialy_dom
{
public:
    void zmien(pentagon p)
    {
        cout<<"dostalismy od klasy wartosc: "<<p.F_35<<endl;
        p.F_35="Tajny";
        cout<<"Po zmianach "<<p.F_35<<endl;
    }
};


int main()
{
    pentagon P1;
    bialy_dom B1;
    B1.zmien(P1);
    P1.wyswietl();


}
