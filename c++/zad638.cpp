#include<vector>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


struct ulamek
{
int licznik;
int mianownik;
void drukuj()
{
cout << licznik << "/" << mianownik << endl;
}

ulamek operator+(ulamek &u)
{
ulamek wynik;
int nwd = __gcd(mianownik, u.mianownik);
int nww = mianownik/nwd*u.mianownik;
wynik.mianownik = nww;
wynik.licznik = licznik*nww/mianownik +u.licznik*nww/u.mianownik;
return wynik;
}
ulamek operator-(ulamek &u)
{
ulamek wynik;
int nwd = __gcd(mianownik, u.mianownik);
int nww = mianownik/nwd*u.mianownik;
wynik.mianownik = nww;
wynik.licznik = licznik*nww/mianownik -u.licznik*nww/u.mianownik;
return wynik;
}
ulamek operator*(ulamek u)
{
ulamek wynik;
int nwd1 = __gcd(mianownik, licznik);
int nwd2 = __gcd(u.mianownik, u.licznik);
wynik.mianownik = (mianownik/nwd1)*(u.mianownik/nwd2);
wynik.licznik = (licznik/nwd1)*(u.licznik/nwd2);
int nwd3 = __gcd(wynik.mianownik, wynik.licznik);
wynik.mianownik /= nwd3;
wynik.licznik /= nwd3;
return wynik;
}
ulamek operator/(ulamek u)
{
ulamek wynik;
int nwd1 = __gcd(mianownik, licznik);
int nwd2 = __gcd(u.mianownik, u.licznik);
wynik.mianownik = (mianownik/nwd1)*(u.licznik/nwd2);
wynik.licznik = (licznik/nwd1)*(u.mianownik/nwd2);
int nwd3 = __gcd(wynik.mianownik, wynik.licznik);
wynik.mianownik /= nwd3;
wynik.licznik /= nwd3;
return wynik;
}

bool operator<(ulamek &u)
{
ulamek u1;
u1.licznik = u.licznik;
u1.mianownik = u.mianownik;

ulamek u2;
u2.licznik = licznik;
u2.mianownik = mianownik;
uprosc(u1);
uprosc(u2);
int nwd = __gcd(u1.mianownik, u2.mianownik);
int nww = u2.mianownik/nwd*u.mianownik;
u1.licznik = u1.licznik*nww/u1.mianownik;
u2.licznik = u2.licznik*nww/u2.mianownik;
if(u2.licznik == u1.licznik) return mianownik < u.mianownik;
return u2.licznik < u1.licznik;
}
void uprosc(ulamek &u)
{
int nwd = __gcd(u.licznik, u.mianownik);
u.licznik = u.licznik/nwd;
u.mianownik = u.mianownik/nwd;
}
};

void uprosc(ulamek &u)
{
int nwd = __gcd(u.licznik, u.mianownik);
u.licznik = u.licznik/nwd;
u.mianownik = u.mianownik/nwd;
}

vector<ulamek> dane;


void A()
{
ulamek minimum = dane[0];
for(ulamek u: dane)
{
if(u < minimum) minimum = u;
}
cout << "A " << endl;
minimum.drukuj();
}

void B()
{
int n = 0;
for(ulamek u: dane)
{
int nwd = __gcd(u.licznik,u.mianownik);
if(nwd == 1)
{
n++;
}
}
cout << "B "  << endl << n << endl;
}

void C()
{
long suma = 0;
for (ulamek u: dane)
{
uprosc(u);
suma += u.licznik;
}
cout << "C " << endl << suma << endl;
}

void D()
{
long suma = 0;
const long mianownik = 2*2*3*3*5*5*7*7*13;
for(ulamek u: dane)
{
suma += u.licznik * (mianownik/u.mianownik);
}
cout << "D"<< endl<< suma << endl;
}

int main()
{
ifstream plik("dane_ulamki.txt");
for (int i = 0; i < 1000; i++)
{
ulamek u;
plik >> u.licznik >> u.mianownik;
dane.push_back(u);
}
//for(ulamek u: dane) u.drukuj();
A();
B();
C();
D();
return 0;
}
