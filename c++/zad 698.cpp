#include<bits/stdc++.h>
using namespace std;

int na_odcinku = 0;
int na_prostej = 0;
double suma_odleglosci = 0;

double odleglosc (pair<int,int> p1, pair<int,int> p2) // odległość działa
{
double a = abs(p2.first - p1.first);
double b = abs(p2.second - p1.second);
double c = sqrt((a*a) + (b*b));
return c;
}

pair<double,double> punktPrzeciecia (double a, double b, pair<int,int> pz) // błędne wyniki
{
double c = (-1 / a);
double d = pz.second - (c* pz.first);
double x = (d -b)/(a - c);
double y = a * x + b;
pair<int,int> punktPrzeciecia = make_pair(x, y);
return punktPrzeciecia;
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
else
{
suma_odleglosci = odleglosc(pz, punktPrzeciecia(a, b, pz));
}

}

int main()
{
cout.precision(10);
ifstream plik ("punkty_odcinki.txt");
pair<int,int> p1, p2, pz;
for(int i = 0; i < 100; i++)
{
plik >> p1.first >> p1.second >> p2.first >> p2.second >> pz.first  >> pz.second;
Zbadaj(p1, p2, pz);
}
cout << na_odcinku << endl << na_prostej << endl << suma_odleglosci << endl;

pair<int,int>tempA = make_pair(0,0);
pair<int,int>tempP = punktPrzeciecia(-1, 5, tempA);
cout << tempP.first << " " << tempP.second;
}
