#include <iostream>
using namespace std;

int main()
{
int podstawa;
cout << "Podaj podstawę potęgi" << endl;
cin >> podstawa;

int wykładnik;

do
{
cout << "Podaj wykładnik potęgi" << endl;
cin >> wykładnik;
}
while (wykładnik < 0);

int wynik = 1;

while (wykladnik > 0)
{

wynik *= podstawa;


wykładnik--;
}

cout << wynik << endl;
return 0;
}
