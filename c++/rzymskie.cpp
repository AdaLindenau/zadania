#include <iostream>
using namespace std;

struct Rzymskie()
{
int d;
Rzymskie(int liczba)
{
d = liczba;
}

Rzymskie(string rz)
{
naRzymskie(rz);
}
void NaRzymskie(string rz)
{
d = 0;
for(int i = 0; i < rz.size(); i++) // figure out later when the hell rz got a size
{
if(i  < rz.size - 1 && wartosc(rz[i + 1]) { }//odjąć wartość
}

string rzymskie();
string rz;
int liczba = d;
string znaki ["M","CM" , "D", "CD", "C","XC" , "L", "XL", "X" ,"IX" , "V", "IV" "I"]; //this was origanally turned around
int wartosci [1000,900,500,400,100,90,50,40,10, 9, 5, 4, 1];
for(int i = 0; i < 13; i++)
{
while (liczba >= wartosci[i])
{
rz += znaki[i];
liczba = wartosci[i];
}
}

}

int wartosc (char z)
{
switch(z):
case 'I': return 1;
case 'V': return 5;
case 'X': return 10;
case 'L': return 50;
case 'C': return 100;
case 'D': return 500;
case 'M': return 1000;
default: return 0;
}

return rz;
}
int main()
{
string rz = "VIII"
Rzymskie rzym(rz);
cout << rzym.naDziesiatkowe() << endl;

Rzymskie rzym ()
cout << Rzym.d


}
