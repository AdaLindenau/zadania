#include <iostream>
#include<fstream>
using namespace std;


int liczby1[1000];
int liczby2[1000];
int liczby3[1000];

void A()
{
int ile = 0;
for (int i = 0; i < 1000; i++)
{
if (liczby2[i] >= liczby1[i] && liczby3[i] >= liczby2[i])
{
ile++;
}
}
cout << "A: " << ile << endl;
}

int NWD(int n, int m)
{
    int reszta;
    while(true)
    {
    reszta = n % m;
    if(reszta == 0) return m;
    n = m;
    m = reszta;
    }

    return 0;
}

void B()
{
int ile = 0;
for (int i = 0; i < 1000; i++)
{
ile += NWD( NWD(liczby1[i], liczby2[i]), liczby3[i]);
}
cout << "B: " << ile << endl;
}

int sumaCyfr (int a)
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
int ile = 0;
int ile2 = 0;
int naj = 0;
int pomocniczaSuma = 0;
for (int i = 0; i < 1000; i++)
{
//cout << sumaCyfr(liczby1[i]) <<", " << sumaCyfr(liczby2[i]) << ", " << sumaCyfr(liczby3[i]) << endl;
pomocniczaSuma = sumaCyfr(liczby1[i]) + sumaCyfr(liczby2[i]) + sumaCyfr(liczby3[i]);
if (pomocniczaSuma == 35) ile++;

if(pomocniczaSuma > naj)
{
naj = pomocniczaSuma;
ile2 = 1;
}
else if(pomocniczaSuma == naj) ile2++;
}
cout << "C: " << ile << ", " << naj<< ", " << ile2 << endl;

}


int main()
{
ifstream plik ("liczby.txt");

for(int i = 0; i < 1000; i++)
{
plik >> liczby1[i];
plik >> liczby2[i];
plik >> liczby3[i];

}

A();
B();
C();
}
