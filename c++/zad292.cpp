#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
int liczby[500];

bool czyPierwsza (float a)
{
if (a > (int)a ) return false;

for(int i = 2; i < a; i++)
{
if ((int)a % i == 0) return false;
}
return true;
}

int main()
{
ifstream plik;
plik.open("liczby.txt");

for ( int i = 0; i < 500; i++)
{
plik >> liczby[i];
}
float pierwiastek;
for(int i = 0; i < 500; i++)
{
pierwiastek = sqrt((float)liczby[i]);

if(czyPierwsza(pierwiastek))
{
cout << liczby[i] << endl;
}
}
}
