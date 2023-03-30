#include<bits/stdc++.h>
using namespace std;

int na_odcinku = 0;
int na_prostej = 0;
double suma_odleglosci = 0;

double odleglosc (pair<int,int> p1, pair<int,int> p2)
{
double a = abs(p2.first - p1.first);
double b = abs(p2.second - p1.second);
double c =
}

void Zbadaj(pair<int,int> p1, pair<int,int> p2, pair<int,int> pz)
{
double a = (p2.second - p1.second) / (p2.first - p1.first);
double b = p1.second - (a * p1.first);

if(pz.second - a * pz.first == b) //przynależnośćdo prostej
{
na_prostej++;

if(odleglosc(pz, p1) < odleglosc(p1, p2) && odleglosc(pz, p2) < odleglosc(p1, p2)) na_odcinku++;
}
else // to be done

}

int main()
{

ifstream plik ("punkty_odcinki.txt");
pair<int,int> p1, p2, pz;
for(int i = 0; i < 100; i++)
{
plik >> p1 >> p2 >> pz;
Zbadaj(p1, p2, pz);
}
}
