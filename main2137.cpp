#include <iostream>

using namespace std;

class hurtownia
{
    public:
    string artykul;
    string kod;
    string nazwa;
    string producent;
    float cena_brutto;

    hurtownia(string a, int k, string n, string p ,float c);


    void wczytaj()
    {
        cout << "Podaj artyku³ "<<endl;
        cin >> artykul;
        cout << "Podaj kod "<<endl;
        cin >> kod;
        cout << "Podaj nazwe "<<endl;
        cin >> nazwa;
        cout << "Podaj producenta "<<endl;
        cin >> producent;
        cout << "Podaj cene brutto "<<endl;
        cin >> cena_brutto;
    }
    void wypisz()
    {
        cout<<"Artyku³ to "<< artykul <<endl;
        cout<<"Kod to "<<kod<<endl;
        cout<<"Nazwa to "<<nazwa<<endl;
        cout<<"Producent to "<<producent<<endl;
        cout<<"cena brutto to "<<cena_brutto<<endl;
    }

    };
    hurtownia::hurtownia(string a="spozywczy",int k=100, string n="kasza", string p="Sonko", float c=20.0)
     {
        artykul = a;
        kod = k;
        nazwa = n;
        producent = p;
        cena_brutto =c;

    }
int main()
{
    hurtownia h1;
    h1.wypisz();
    return 0;
}
