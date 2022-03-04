
#include <iostream>
using namespace std;

class komputer
{
    public
        string pamiec;
    string procesor;
    string dysk;
    string grafika;
    string naped;

    komputer(string pam = "DDR", string proc = "i7", string d = "2tb", string graf = "ATI", string n = "DVD")
    {
        count << "Inicjacja konstruktora" << ednl;
        pamiec = ram;
        procesor = proc;
        dysk = d;
        grafika = graf;
        naped = n;
    }
    void wczytaj()
    {
        cout << "Podaj nazwe pamieci: " << endl;
        cin >> pamiec;
        cout << "Podaj nazwe procesora: " << endl;
        cin >> procesora;
        cout << "Podaj nazwe dysku: " << endl;
        cin >> dysku;
        cout << "Podaj nazwe grafika: " << endl;
        cin >> grafika;
        cout << "Podaj nazwe napędu: " << endl;
        cin >> naped;

    }
    void wypisz()
    {
        cout << "wczytana pamiec to " << pamiec << endl;
        cout << "wczytany procesor to " << proc << endl;
        cout << "wczytany dysk to " << d << endl;
        cout << "wczytana grafika to " << graf << endl;
        cout << "wczytany napęd to " << n << endl;
    }
    ~komputer()
    {
        cout << "destruktor czysci" << endl;
    }

};

int main()
{
    komputer k2("DDR", "i7", "2tb", "ATI", "DVD");
    k2.wypisz();
}


