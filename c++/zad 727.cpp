#include<bits/stdc++.h>
using namespace std;

vector<long double> calki;

long double f(double x, vector<int>& w)
{
long double s = 0;
for(int a: w) s = s*x + a;
return s;
}

long double oblicz(int x1, int x2, vector<int>& w)
{
long double suma = 0;
const double dx = 0.01;
double x = x1;
long double f1 = f(x, w);
long double f2;
while(x < x2)
{
f2 = f(x+dx, w);
suma += abs((f1 + f2)*dx/2.0);
f1 = f2;
x += dx;
}
return suma;
}
int main()
{
int n, tmp, x1, x2;
ifstream plik ("calki.txt");
for(int i = 0; i < 200; i++)
{
plik >> n;
vector<int> w;
for(int j = 0; j < n; j++)
{
plik >> tmp;
w.push_back(tmp);
}
plik >> x1 >> x2;
calki.push_back(oblicz(x1,x2,w));
}
sort(calki.begin(), calki.end());
for(int i = 0; i < 3; i++) cout << calki[i] << endl;
for(int i = calki.size() - 1; i > calki.size() -4; i--)cout << calki[i] << endl;

return 0;
}
