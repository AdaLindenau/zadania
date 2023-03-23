#include<bits/stdc++.h>
using namespace std;

vector <int> wspolczynniki;

double funkcja(x1, x2)
{


}

int main()
{
ifstream plik ("metoda_polowienia.txt");
int precision;
int stopien;
double x1;
double x2;
int temp;
plik >> precision;
for (int i = 0; i <11; i++)
{
plik >> stopien;
for (int j = 0; j <= 4; j++)
{
plik >> temp;
wspolczynniki.push_back(temp);
}
plik >> x1;
plik >> x2;
cout.precision(precision);
cout << funkcja(x1, x2) << endl;
}

return 0;
}
