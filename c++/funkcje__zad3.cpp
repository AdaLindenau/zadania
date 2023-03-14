#include <iostream>
#include <cmath>
using namespace std;

double Wynik(double k, double n)
{
double wynik;
while (k <= n)
{
wynik *= pow(20, 1.0 /3.0) / 2 * k;

k++;
}

}

int main()
{
double k;
double n;
cin >> k;
cin >> n;

cout << wynik(k,n) << endl;
return 0;
}
