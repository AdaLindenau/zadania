#include<bits/stdc++.h>
using namespace std;

double pierwiastek(long double a)
{
const int delta = 1;
long x1 = 2;
long x2 = (x1+a/x1)/2;
while(abs(x2 - x1) > delta)
{
x1 = x2;
x2 = (x1+a/x1)/2;
}
return x2;
}
/*
long pierwiastekCalkowity(const long n) // Alternatively
{
_int128 p = 1;
while(true)
{
p = (p+n/p)/2;
if(p*p <= n && (p+1)*(p+1) > n) return p;
}
return (long)p;
}
*/
int main()
{
ifstream plik("pierwiastki_calkowite.txt");
long double liczba;
long suma = 0;
for(int i = 0; i < 100000; i++)
{
plik >> liczba;
suma += pierwiastek(liczba);
cout.precision(30);
cout << liczba << " " << pierwiastek(liczba) << endl;
}

cout << sqrt(565.85) << " " << pierwiastek(565.85) << endl;

cout << suma << endl;
return 0;
}
