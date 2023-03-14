#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

string zapisyLiczb[51];
int podstawySystemow[51];
char dzialania[50];

int cyfraNaLiczbe(char c)
{
if (c >= 0 && c <= 9) return c - '0';
return c - 'A' + 10;
}

int przelicz(string s, int p)
{
int liczba = 0;
for (int i = 0; i < s.length(); i++)
{
liczba += cyfraNaLiczbe(s[s.length() - i]) * pow(p, i);
}
//cout << liczba << endl;
return liczba;
}

int main()
{
int liczba;
int wynik = 0;
ifstream plik("dzialania.txt");

for (int i = 0; i< 51; i ++)
{
plik >> zapisyLiczb[i];
plik >> podstawySystemow[i];
plik >> dzialania[i];
//cout << zapisyLiczb[i] << " " << podstawySystemow[i] << endl << dzialania[i] << endl;
liczba = przelicz(zapisyLiczb[i], podstawySystemow[i]);
if (i == 0) wynik = liczba;

switch(dzialania[i])
{
case '+': return wynik+= liczba;

case '-': return wynik-= liczba;

case '*': return wynik*= liczba;

case '%': return wynik %= liczba;
}

}

cout << wynik;
return 0;
}
