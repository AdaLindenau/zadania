#include<iostream>
#include<fstream>
using namespace std;


int main()
{
ifstream plik("wielomiany.txt");
int stopien;
double x;
for(int i = 0; i< 200; i++)
{
plik >> stopien;
stopien++;
double wspolczynniki[stopien];
for(int i = 0; i < stopien; i++)
{
plik >> wspolczynniki[i];

}
plik >> x;
}

}
