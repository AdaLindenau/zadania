#include<iostream>
using namespace std;


double horner(long tab[], long size, long x)
{
    double y = tab[0];
    for(int i = 1; i < size; i++)
    {
        y = y*x + tab[i];
    }
    return y;
}


int main()
{

long iloscZestawow;
long iloscZapytan;
long stopien;

cout << "Podaj liczbę zestawów" << endl;

cin >> iloscZestawow;

for (int i = 0; i < iloscZestawow; i++)
{
cout << "Podaj stopień wielomianu" << endl;
cin >> stopien;
stopien++;
cout << "Podaj współczynniki wielomianu" << endl;
long *wspolczynniki = new long [stopien];
for(int i = 0; i < stopien; i++)
{
cin >> wspolczynniki [i];
}

cout << "Podaj ilość zapytań" << endl;
cin >> iloscZapytan;
cout << "Podaj argumenty" << endl;
long *argumenty = new long [iloscZapytan];
for(int i = 0; i < iloscZapytan; i++)
{
cin >> argumenty[i];

}

for (int i = 0; i < iloscZapytan; i++)
{
cout << horner(wspolczynniki ,stopien, argumenty[i]) << endl;
}

}

}
