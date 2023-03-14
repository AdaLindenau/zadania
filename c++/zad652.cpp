#include<bits/stdc++.h>
using namespace std;

vector<string> slowa;

int dl (string pom)
{
int wynik = 0;
for(char c: pom)
{
if(c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U' && c != 'Y') wynik++;
}
return wynik;
}

void Przesortuj(pair<string, int> p [10])
{
pair<string, int> pom;
for (int i = 9; i >= 0; i--)
{
if (p[i].second >p[i - 1].second)
{
pom = p[i - 1];
p[i - 1] = p[i];
p[i] = pom;
}
}
}

void A()
{
string najW = "";
string najm = "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH";
for(string s: slowa)
{
if(dl(s) > dl(najW)) najW = s;
if(dl(s) < dl(najm)) najm = s;
}
cout << "A" << endl << najW << endl << najm << endl;
}

void B()
{
cout << "B" << endl;
pair<string,int> tablica [10];
map<string, int> mapa;
for(string s: slowa)
{
mapa[s]++;

}
for(pair<string, int> p: mapa)
{
if (p.second > tablica[9].second)
{
tablica[9].second = p.second;
Przesortuj(tablica);
}
}
for(int i = 0; i < 10; i++)
{
cout << tablica[i].first << " " << tablica[i].second << endl;
}
}

int main()
{
ifstream plik("tekst.txt");
for(int i = 0; i < 2000; i++)
{
string p;
plik >> p;
slowa.push_back(p);
}

//for(string s: slowa) cout << s << " ";

A();
B();
return 0;
}

