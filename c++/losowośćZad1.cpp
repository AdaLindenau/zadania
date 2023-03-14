#include <ibits/stdc++.h>
using namespace std;

int main()
{

int ile;
cin >> ile;

srand(time(NULL));


int liczby [ile] = rand();

double wynik;

for (int i = 0; i < ile; i++)
{

wynik += liczby[i];

}

return wynik / ile;
}
