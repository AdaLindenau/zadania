#include<iostream>
#include<fstream>
using namespace std;

int liczby[1000];

long srednia()
{
long srednia = 0;
long reszta = 0;

for (int i = 0; i < 1000; i++)
{
srednia = srednia + div(liczby[i], 1000);
reszta += mod(liczby[i], 1000);

}

cout << srednia << " " << reszta << "/1000";

}

int main()
{
ifstream plik("duze_liczby.txt");
for(int i = 0; i < 1000; i++)
{
plik >> liczby[i];
//cout << liczby[i] << endl;
}

srednia();

}
