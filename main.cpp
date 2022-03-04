#include <iostream>

using namespace std;
int podzielna(int pocz, int kon, int liczba);

int main()
{
    int a=1,b=500,c=7;
   int ile=podzielna(a,b,c);
   cout<<"W przedziale liczbopwym od 1 do 500 znajduje sie: "<<ile<<" liczb podzielnych przez "<<c;
   return 0;
}
int i;
int podzielna (int pocz, int kon, int liczba)
{
   int ile=0;
   for(int pocz;i<=kon;i++)
      if(i%liczba==0)
       ile++;
       return ile;
}
