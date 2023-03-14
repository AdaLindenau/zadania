#include<iostream>
#include<fstream>
using namespace std;

bool CzyPalindrom (int a) // CZY PALINDROM Z INT
{

std::string pomocnicza = std::to_string(a);

bool czyPalindrom = true;
for(int i = 0; i <(pomocnicza.length() / 2) +1; i++)
{
if(pomocnicza[i] != pomocnicza[pomocnicza.length() - i - 1]) czyPalindrom = false;
}
return czyPalindrom;
}

int SumaCyfr (int a)
{
int ile = 0;

while(a > 0)
{
ile += a % 10;
a/= 10;
}
return ile;
}

int NWD(int n, int m)
{
    int reszta;
    while(true)
    {
    reszta = n % m;
    if(reszta == 0) return m;
    n = m;
    m = reszta;
    }

    return 0;
}

int main()
{

}
