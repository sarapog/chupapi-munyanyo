#include <iostream>

using namespace std;

class Klasa
{

    public:
        int atrybut_klasy;
        Klasa(int x=10)
        {
            atrybut_klasy=x;
        }
        friend void ZaprzyjaznionaFunkcja(Klasa k);
};
void ZaprzyjaznionaFunkcja (Klasa k)
{
    k.atrybut_klasy=15;
    cout<<k.atrybut_klasy<<endl;
}

int main()
{
    Klasa k;
    ZaprzyjaznionaFunkcja(k);
    cout<<k.atrybut_klasy<<endl;
}
