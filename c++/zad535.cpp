#include<iostream>
using namespace std;

int sumaCyfr(long n)
{
if (n < 10) return n;
else return sumaCyfr(n / 10) + (n % 10);
}

int sumaZOgonkiem (long n, int wynik)
{
if (n < 10) return wynik + n;
else return sumaZOgonkiem(n / 10, wynik + n % 10);
}


int main()
{
long n;
cin >> n;
cout << endl << sumaCyfr(n);
}
