#include <iostream>
using namespace std;

int main()
{
int a;
int b;

cout << "Podaj pierwszą liczbę" << endl;
cin >> a;

cout << "Podaj drugą liczbę" << endl;
cin >> b;

if ( a % b == 0 || b % a == 0)
cout << "Dzielą się" << endl;
else
cout << "Nie dzielą się" << endl;




return 0;
}
