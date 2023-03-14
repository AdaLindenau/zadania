#include <iostream>
using namespace std;

long potegowanieSzybkie(long a, long x)
{
long w = 1;

while (x > 0)
{
if(x % 2 == 1) w *= a;
a *= a;
x /= 2;

}
return w*a;
}

long ostatniaCyfra(long a)
{
long b =a / 10;
b *= 10;
return a -b;
}

int main()
{
long powtorzeniaForTable;
long a;
long b;
long wynik;
cin >> powtorzeniaForTable;
long cyfry[powtorzeniaForTable];


for (int i = 0; i < powtorzeniaForTable; i++)
{
cin >> a;
cin >> b;
wynik = potegowanieSzybkie(a, b);

cyfry[i] = ostatniaCyfra(wynik);
}

for(int i = 0; i < powtorzeniaForTable; i++)
{
cout << cyfry[i] << endl ;
}


return 0;
}
