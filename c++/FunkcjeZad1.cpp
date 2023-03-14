#include <iostream>
using namespace std;

const double g = 9.81;

double h (double t)
{
return (g*t*t)/2;
}

int main()
{

cout << "Podaj czas w sekundach" << endl;
double t;
cin >> t;

cout << h(t);

}
