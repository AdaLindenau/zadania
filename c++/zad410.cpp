#include<iostream>
#include<fstream>
using namespace std;

int liczby[1000];

void A()
{
int naj= 0;

for(int i = 0; i < 1000; i++)
{
if(liczby[i] % 2 == 0 && liczby[i] > naj) naj = liczby[i];
}
cout << "A" << endl << naj << endl;

}

bool CzyPalindrom (int a)
{

std::string pomocnicza = std::to_string(a);

bool czyPalindrom = true;
for(int i = 0; i <(pomocnicza.length() / 2) +1; i++)
{
if(pomocnicza[i] != pomocnicza[pomocnicza.length() - i - 1]) czyPalindrom = false;
}
return czyPalindrom;
}

void B( )
{
cout << "B" << endl;
for(int i = 0; i < 1000; i++)
{
if(CzyPalindrom(liczby[i])) cout << liczby[i] << endl;
}
}

int SumaCyfr (int a)
{
int ile = 0;

while(a > 0)
{
ile += a % 10;
a/= 10;
}
return ile;
}

void C()
{
long ILE = 0;
int suma = 0;

cout << "C" << endl;

for (int i = 0; i < 1000; i++)
{
suma = SumaCyfr(liczby[i]);
ILE += suma;

if (suma > 30) cout << liczby[i] << endl;
}

cout << endl << ILE;
}


int main()
{

ifstream plik ("liczby.txt");

for (int i = 0; i < 1000; i++)
{
plik >> liczby[i];
}

A();
B();
C();
}
