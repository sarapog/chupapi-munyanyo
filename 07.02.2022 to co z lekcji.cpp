#include <iostream>
using namespace std;

class komputer
{
public:
    string pamiec;
    string procesor;
    string dysk;
    string grafika;
    string naped;

    komputer(string pam = "DDR", string proc = "i7", string d = "2tb", string graf = "ATI", string n = "DVD")
    {
        cout << "Inicjacja konstruktora" << endl;
        pamiec = pam;
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
        cin >> procesor;
        cout << "Podaj nazwe dysku: " << endl;
        cin >> dysk;
        cout << "Podaj nazwe grafika: " << endl;
        cin >> grafika;
        cout << "Podaj nazwe napędu: " << endl;
        cin >> naped;

    }
    void wypisz()
    {
        cout << "wczytana pamiec to " << pamiec << endl;
        cout << "wczytany procesor to " << procesor << endl;
        cout << "wczytany dysk to " << dysk << endl;
        cout << "wczytana grafika to " << grafika << endl;
        cout << "wczytany napęd to " << naped << endl;
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


