#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

struct Galeria
{
string panstwo;
string miasto;
int powierzchnia;
vector<int> lokale;
set<int> unikalne; // set nie dodaje wartości które już w nim są tak jak mapa, ale nie ma klucza; zamiast push_back używa insert

void drukuj ()
{
cout << panstwo << " " << miasto <<  " lokale: " << lokale.size() << endl;
}

};
vector<Galeria> galerie;

void A()
{

map<string, int> mapa;
for(Galeria g: galerie) mapa[g.panstwo]++;
cout << "A" << endl;
for(pair<string, int> p: mapa)
{
cout << p.first << " " << p.second << endl;
}
}

void B()
{
map<string, int> mapa;
cout << "Ba" << endl;
for(Galeria g: galerie)
{
mapa[g.miasto] = g.powierzchnia;
for(pair<string, int> p: mapa)
{
cout << p.first << " " << p.second  << " " << g.lokale.size() << endl;
}
}
cout << "Bb" << endl;

string miastoMax;
string miastoMin;
int powierzchniaMax = 0;
int powierzchniaMin = INT_MAX;
for(Galeria g: galerie)
{
if (g.powierzchnia > powierzchniaMax)
{
powierzchniaMax = g.powierzchnia;
miastoMax = g.miasto;
}
else if (g.powierzchnia < powierzchniaMin)
{
powierzchniaMin = g.powierzchnia;
miastoMin = g.miasto;
}
}

cout << miastoMax << " " << powierzchniaMax << endl << miastoMin << powierzchniaMin << endl;
}

void C()
{
cout << "C" << endl;
string miastoMax;
string miastoMin;
int iloscMax = 0;
int iloscMin = INT_MAX;
for(Galeria g: galerie)
{
if (g.unikalne.size() > iloscMax)
{
iloscMax = g.unikalne.size();
miastoMax = g.miasto;
}
else if (g.unikalne.size() < iloscMin)
{
iloscMin = g.unikalne.size();
miastoMin = g.miasto;
}
}

cout << miastoMax << " " << iloscMax << endl << miastoMin << iloscMin << endl;
}

int main()
{
ifstream plik ("galeria.txt");
int a; int b;
for (int i = 0; i < 70; i++)
{
Galeria g;
g.powierzchnia = 0;
plik >> g.panstwo >> g.miasto;
for (int i = 0; i < 70; i++)
{
plik >> a >> b;
if(a > 0)
{
g.lokale.push_back(a*b);
g.unikalne.insert(a*b);
g.powierzchnia += a*b;

}
}
galerie.push_back(g);
}

A();
B();
C();
return 0;
}
