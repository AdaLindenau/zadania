#include<iostream>
#include<fstream>
using namespace std;

string pesele[1000];

void A()
{
int ileK = 0;
int ileM = 0;
string pomocnicza;
for(int i = 0; i < 1000; i++)
{
pomocnicza = pesele[i];
if(pomocnicza[9] % 2 == 0) ileK++;
else ileM++;
}
cout << "A" << endl << "kobiety: " << ileK << ", męszczyźni: " << ileM << endl;
}

void B()
{
int ile = 0;
string pomocnicza;
for(int i = 0; i < 1000; i++)
{
pomocnicza = pesele[i];
//cout <<  pesele[i] << endl;
//cout << pomocnicza << ", " << pomocnicza[2] << " " << pomocnicza[3] << endl;
if(pomocnicza[i] == 1)//( || pomocnicza[2] == 3) && pomocnicza[3] == 1
{
ile++;
cout << pomocnicza << endl;
}
}
cout << "B" << endl << ile << endl;
}

int main()
{
ifstream plik ("dane.txt");

for (int i = 0; i < 1000; i++)
{
plik >> pesele[i];
//cout << pesele[i] << endl;
}

A();
B();
}
