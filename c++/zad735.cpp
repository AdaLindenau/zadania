#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> punkty; // t i N

long obliczPole(int N0, double lambda)
{
int naleza = 0;
for(pair<double, int> p: punkty)
{
int N = N0*exp(-1.0*lambda*p.first);
if( N >= p.second) naleza++;
}
return 20L*naleza;
}

int main()
{
// exponent monte carlo 1 to n0, druga to lambda
ifstream plik1 ("punkty_losowe.txt");
int t, N;
for(int i = 0; i < 100000; i++)
{
plik1 >> t >> N;
punkty.push_back(make_pair(t, N));
}
plik1.close();
ifstream plik2 ("exponent_monte_carlo.txt");
double lambda;
int N0;
long suma = 0;
long tmp;
for(int i = 0; i < 100; i++)
{
plik2 >> N0 >> lambda;
tmp = obliczPole(N0, lambda);
cout << tmp << endl;
suma += tmp;
}
cout <<suma << endl;
return 0;
// alright, something is wrong here and I have no idea what it is
}
