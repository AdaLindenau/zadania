#include <iostream>
#include <fstream>
using namespace std;



struct pracownik {
string imie;
string nazwisko;
string pesel;
double wynagrodzenie[12];

void drukuj ()
{

cout << "Pracownik:" << imie << " "<< nazwisko << " "<< pesel << " Średnie wynagrodzenie: " << Sr()<< endl;
}

double Sr()
{
double sr = 0;
for (int i = 0; i < 12; i++)
{
sr += wynagrodzenie[i];
}
sr /= 12;
return sr;
}
};

pracownik pracownicy[200];

double bigSr()
{
double sr = 0;
for (int i = 0; i < 200; i++)
{
sr += pracownicy[i].Sr();
}
sr /= 12;
return sr;

}

void max()
{
int index = 0;
for(int i = 1; i < 200; i ++)
{
if (pracownicy[i].Sr() > pracownicy[index].Sr())
{
index =i;
}

}
pracownicy[index].drukuj();
}


int main()
{
ifstream plik("pracownicy.txt");

for(int i = 0; i < 200; i++)
{
plik >> pracownicy[i].imie;
plik >> pracownicy[i].nazwisko;
plik >> pracownicy[i].pesel;

for (int j = 0; j < 12; j++)
{
plik >> pracownicy[i].wynagrodzenie[j];
}

pracownicy[i].drukuj();
}
cout << endl;
max();
}
