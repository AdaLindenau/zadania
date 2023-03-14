#include <iostream>
#include <cmath>
using namespace std;

int X (int x)
{

int wynik = (sqrt(3) - pow(x,5)) / (-2 + x);
return wynik;
}

int main()
{
int x;

do
{
cout << "Podaj liczbę całkowitą x, inną niż 2" << endl;
cin >> x;
}
while (x == 2);

return X(x);
}
