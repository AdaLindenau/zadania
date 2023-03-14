#include <iostream>
#include <fstream>
using namespace std;

int pierwsze[1000];
int drugie[1000];

void A ()
{
int ile = 0;
for (int i = 0; i < 1000; i++)
{
if (pierwsze[i] % 2 == 0 && drugie[i] % 2 == 0) ile++;
}
cout << "A" << endl << "liczba lini, w których obie liczby są parzyste: " << ile << endl;
}

void B ()
{
int ile = 0;
for (int i = 0; i < 1000; i++)
{
if (pierwsze[i] > drugie[i]) ile++;
}
cout << "B" << endl << "liczba lini, w których pierwsza liczba jest większa od drugiej: " << ile << endl;
}

void C ()
{
int ile = 0;
for (int i = 0; i < 1000; i++)
{
if (pierwsze[i] % drugie[i] == 0 || drugie[i] % pierwsze[i] == 0) ile++;
}
cout << "C" << endl << "liczba lini, w których jedna z liczb jest wielokrotnością tej drugiej: " << ile << endl;
}

int NWD (int a, int b)
{
    int reszta;

    while(true)
    {
        reszta = a % b;
        if(reszta == 0) return b;
        a = b;
        b = reszta;
    }
    return 0;
}

void D ()
{
int ile = 0;
for (int i = 0; i < 1000; i++)
{
if (NWD(pierwsze[i], drugie[i]) == 1) ile++;
}
cout << "D" << endl << "liczba lini, w których zawiera się para liczb względnie pierwszych: " << ile << endl;
}

int sumaCyfr(int a)
{
int suma = 0;
while (a > 0)
{
suma += a % 10;
a /= 10;
}
return suma;
}

void E ()
{
int ile = 0;
for (int i = 0; i < 1000; i++)
{
if (sumaCyfr(pierwsze[i]) == sumaCyfr(drugie[i])) ile++;
}
cout << "E" << endl << "liczba lini, w których suma cyfr pierwszej liczby jest równa smie cyfr drugiej: " << ile << endl;
}

bool czy3 (int a)
{
while (a > 1)
{
if(a % 3 != 0)
{
return false;
}
a /= 3;
}
return true;
}

void F ()
{
ofstream zapis;
zapis.open("POTEGI.TXT");

for (int i = 0; i < 1000; i++)
{
if (czy3(pierwsze[i]))
{
zapis << pierwsze[i] << endl;
}
if (czy3(drugie[i]))
{
zapis << drugie[i] <<endl;
}
}

}

int main()
{
ifstream plik;
plik.open("PARY_LICZB.TXT");

for(int i = 0; i < 1000; i++)
{
plik >> pierwsze[i] >> drugie [i];
//cout << i << " " << pierwsze[i] << " " << drugie[i] << endl;
}

A();
B();
C();
D();
E();
F();
}
