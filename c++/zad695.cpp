#include<bits/stdc++.h>
using namespace std;

vector <int> wspolczynniki;
int stopien;

double F (double x)
{
double wynik = 0;
int n = stopien;
for (int w: wspolczynniki)
{
wynik = pow(x, n) * w;
n--;
}
return wynik;
}

double funkcja(double x1, double x2)
{
if(F(x1) == 0) return x1;
if(F(x2) == 0) return x2;
int x3;
while( abs(x1 - x2 < 0.001))
{
x3 = (x1 + x2)/2;
if (F(x3) * F(x2) < 0) x1 = x3;
else x2 = x3;
}
return x3;
}



int main()
{
ifstream plik ("metoda_polowienia.txt");
int ile;

double x1;
double x2;
int temp;
plik >> ile;
for (int i = 0; i <ile; i++)
{
plik >> stopien;
for (int j = 0; j <= (stopien + 1); j++)
{
plik >> temp;
wspolczynniki.push_back(temp);
}
plik >> x1;
plik >> x2;
cout << funkcja(x1, x2) << endl;
wspolczynniki.clear();
}

return 0;
}
