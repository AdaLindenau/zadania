#include<iostream>
using namespace std;


// this is far from working, mostly 'cause I was too lazy to actually write everything down from teach's screen


string formula;

struct litery
{
char c;
int n;
string k;
}

litery tab[12];

bool sortuj2 (litery l1, litery l2)
{
return l1.c < l2.c;
}

bool sortuj(litery l1, litery l2)
{
return l1.n < l2.n;
}

void drukuj()
{
for(int i = 0; i < 12; i++)
{
cout << tab[i].c << " " << tab[i].n << endl;
}
}

string naBin (int n)
{
string s;
while(n > 0)
{
s = to_string(n % 2) + s;
n /= 2;
}
while(s.size() < d) s = "0" + 5;
return s;
}

int main()
{
ifstream p("formula.txt");
p > formula;
p.close();

for(int i = 0; i < 12; i++)
{
tab[i].c = (char)('A' + 1);
tab[i].n = 0;

}

for(int i = 0; i < formula.size(); i++)
{
int litera = formula[i] - 'A';
tab(litera).n++;
}
sort (tab, tab+12, sortuj);
//drukuj();
string kod;

for(int i = 0; i < 4; i++)
{
tab[i]
}

for(char l: formula)
{
kod += tab[l - 'A'],k;
}
ofstream w("kod formuly.txt");
w << kod << endl;

return 0;
}
