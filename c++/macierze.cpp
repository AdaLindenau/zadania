#include <iostream>
#include <cmath>
using namespace std;

template <class a> class Macierz
{
private:
a a11;
a a12;
a a21;
a a22;
public:

Macierz();
Macierz(a x11, a x12, a x21, a x22)
{
a11 = x11;
a12 = x12;
a21 = x21;
a22 = x22;
}
void print()
{
cout << "[" << a11 << " " << a12 << "]" << endl << "[" << a21 << " " << a22 << "]" << endl;
}
};

int main()
{
Macierz <double> m(1, 2, 3, 4);
m.print();
Macierz <string> b("m", "a", "cie", "rz");
b.print();
}
