#include <iostream>
#include <fstream>
using namespace std;
int liczby[2000];

bool czyPierwsza (float a)
{
if (a > (int)a ) return false;

for(int i = 2; i < a; i++)
{
if ((int)a % i == 0) return false;
}
return true;
}

void A ()
{
int ile = 0;

cout << "A" << endl << "liczba liczb pierwszych: "<< ile << endl;
}

void B()
{
int naj_w = liczby[0];
int naj_m = liczby[0];

for (int i = 1; i < 2000; i++)
{
if (czyPierwsza(liczby[i]) && liczby[i] > naj_w)
{
naj_w = liczby[i];
}
if (czyPierwsza(liczby[i]) && liczby[i] < naj_m)
{
naj_m = liczby[i];
}
}
cout << "B" << endl << "najmniejsza liczba pierwsza: " << naj_m << endl << "największa liczba pierwsza: " << naj_w << endl;
}

void C()
{
cout << "C" << endl<< "pary:" << endl;
int ile = 0;
for (int i = 0; i < 1999; i++)
{
if (czyPierwsza(liczby[i]) && czyPierwsza(liczby[i + 1])&& (liczby[i] - liczby[i + 1] == 2 || liczby[i + 1] - liczby[i] == 2))
{
ile++;
cout << liczby[i] << " " << liczby[i + 1] << endl;
}

}cout << "razem par: " << ile;
}

int main()
{
ifstream plik;
plik.open("dane_6.txt");

for (int i = 0; i < 2000; i++)
{
plik >> liczby[i];
}

A();
B();
C();
}
