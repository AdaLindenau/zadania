#include<bits/stdc++.h>
using namespace std;

vector<double> wielomian;
vector<long double> dlugosci;
long double najW = 0;
long double najM = 9999999999;

long double f(double x)
{
long double s = 0;
int i = 1;
for(int a: wielomian)
{
s += pow(x, wielomian.size() - i)*a;
i++;
}
return s;
}

void A (int x1, int x2)
{
long double wynik = 0;
const double dx = 0.01;
double x = x1;
long double f1 = f(x);
long double f2;
while(x < x2)
{
f2 = f(x+dx);
wynik += abs((f1 + f2)*dx/2.0);
f1 = f2;
x += dx;
}
if (wynik > najW) najW = wynik;
if(wynik < najM) najM = wynik;
}

long double dlugosc(int x1, int x2)
{
long double suma = 0;
const double dx = 0.001;
double x = x1;
long double f1 = f(x);
long double f2;
while(x < x2)
{
f2 = f(x+dx);
suma += sqrt(pow(dx, 2) + pow(abs(f(x) - f(x + dx)), 2));
f1 = f2;
x += dx;
}
return suma;
}

int main()
{
cout.precision(10);
double tmp;
int x1, x2;
ifstream plik ("wielomiany.txt");
for(int i = 0; i < 200; i++)
{
for(int j = 0; j < 4; j++)
{
plik >> tmp;
wielomian.push_back(tmp);
}
plik >> x1 >> x2;
A(x1, x2);
dlugosci.push_back(dlugosc(x1, x2));
wielomian.clear();
}

cout << "A)" << endl << najW << endl << najM << endl;
sort(dlugosci.begin(), dlugosci.end());
for(int i = 0; i < 3; i++) cout << dlugosci[i] << endl;
for(int i = dlugosci.size() - 1; i > dlugosci.size() -4; i--)cout << dlugosci[i] << endl;

return 0;
}
