#include<bits/stdc++.h>
using namespace std;

vector<string> hasla;

void A()
{
int cyfryIle;
int maleIle;
int duzeIle;
int ile = 0;

for(string s: hasla)
{
cyfryIle = 0;
maleIle = 0;
duzeIle = 0;
for(char c: s)
{
if((int)c > 48 && (int)c < 57) cyfryIle++;
if((int)c > 97 && (int)c < 122) maleIle++;
if((int)c > 65 && (int)c < 90) duzeIle++;
}
//cout << cyfryIle << maleIle << duzeIle << endl;
if(maleIle > 0 && cyfryIle > 0 && duzeIle > 0) ile++;
}

cout << "A" << endl << ile << endl;
}

int suma(string s)
{
int wynik = 0;
for(char c: s) wynik+= (int)c;
return wynik;
}

void Przesortuj(pair<int, int> p[21])
{
pair<int, int> pom;
for (int i = 20; i >= 0; i--)
{ //cout << p[i].second << endl;
if (p[i].second >p[i - 1].second)
{
pom = p[i - 1];
p[i - 1] = p[i];
p[i] = pom;
}
}
}


void B()
{
map<int, int> mapa; // suma znaków, ilość występowania tej sumy
pair<int, int> tablica [21];
for(string s: hasla)
{
mapa[suma(s)]++;
cout << suma(s) << endl;
}
for(pair<int, int> p: mapa)
{
if (p.second > tablica[20].second)
{
tablica[20].second = p.second;
Przesortuj(tablica);
}
}
for(int i = 0; i < 21; i++)
{
cout << tablica[i].first << " " << tablica[i].second << endl;
}
}

int main()
{
ifstream plik("hasla.txt");
for(int i = 0; i < 200; i++)
{
string p;
plik >> p;
hasla.push_back(p);
}

//for(string s: hasla) cout << s << " ";

A();
B();
//char k = 'A';
//char l = 'Z';
//cout << (int)l <<" "<< (int)k;
return 0;
}
