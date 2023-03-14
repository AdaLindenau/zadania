#include <iostream>
using namespace std;
int silnia = 1;
int silnia(int n)
{
int pomocnicza = n;
silnia = silnia(n);
silnia *= pomocnicza;
pmocnicza--;
return silnia;
}

int main()
{
cout << silnia(6);
}
