#include<bits/stdc++.h>
using namespace std;

int na_obwodzie =0;
int w_srodku = 0;

double odleglosc (pair<int,int> p1, pair<double,double> p2)
{
double a = abs(p2.first - p1.first);
double b = abs(p2.second - p1.second);
double c = sqrt((a*a) + (b*b));
return c;
}

void Zbadaj(pair<double,double> p, vector<pair<double,double>> wierzcholki)
{
for(int i = 0; i < wierzcholki.size(); i++)
{
pair<double,double> p1,p2;
p1 = wierzcholki[i];
p2 = wierzcholki[i + 1];
if (i == wierzcholki.size() -1) p2 = wierzcholki[0];

double a = (p2.second - p1.second) / (double)(p2.first - p1.first);
double b = p1.second - (a * p1.first);

if(p.second - a * p.first == b && odleglosc(p, p1) < odleglosc(p1, p2) && odleglosc(p, p2) < odleglosc(p1, p2)) // sprawdzamy czy na obwodzie
{
na_obwodzie++;
return;
}
pair<double,double> highest_point = p1; // sprawdzamy czy w polu
pair<double,double> lowest_point = p1;
for(pair<double,double> w: wierzcholki)
{
    if (w.second > highest_point.second) highest_point = w;
    if(w.second < lowest_point.second) lowest_point = w;
}
pair<double,double> hw = p1;
pair<double,double> lw = p1;
if(p2.second > p1.second) hw = p2;
if(p2.second < p1.second) lw = p2;

if (hw.second == highest_point.second && p.second > a*p.first + b) return;
else if (lw.second == lowest_point.second && p.second < a*p.first + b) return;
else if(highest_point.first > hw.first && p.first < (p.second - b)/a) return; // to the right
else if(highest_point.first < hw.first && p.first > (p.second - b)/a) return; // to the left
}
w_srodku++;
return;
}


int main()
{
int boki;
pair<double,double> p;
vector<pair<double,double>> wierzcholki;
ifstream plik ("wielokaty_punkty.txt");
for(int i = 0; i < 200;i++)
{
plik >> boki;

for(int i = 0; i < boki; i++)
{
double temp;
double tempp;
plik >> temp >> tempp;
wierzcholki.push_back(make_pair(temp,tempp));

}
plik >> p.first;
plik >> p.second;
//koniec wczytania

Zbadaj(p, wierzcholki);
wierzcholki.clear();


}
cout << na_obwodzie  << " "<< w_srodku  << endl;


return 0;
}
