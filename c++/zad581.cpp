#include<iostream>
#include<fstream>
using namespace std;

struct budynek
{
int numerDomu;
int mieszkania[20];
};

struct paczka
{
int dom;
int mieszkanie;
};
paczka paczki[1000];
budynek adresy[1000];

bool czyJestDom (int dom)
{
int a = 0; int b = 999;
  int c;
  while(a < b){
    c = (a + b)/2;
   if(adresy[c].numerDomu == dom) return true;
   else if(adresy[c].numerDomu > dom) {
      b = c-1;
    } else a = c+1;


}

return false;
}

int main()
{
fstream plikP ("przesylki.txt");
fstream plikA ("adresy.txt");

for(int i = 0; i < 1000; i++)
{
plikA >> adresy[i].numerDomu;
//cout << adresy[i].numerDomu << " ";
for(int j = 0; j < 20; j++)
{
plikA >> adresy[i].mieszkania[j];
//cout << adresy[i].mieszkania[j] << " ";
}
//cout << endl;

plikP >> paczki[i].dom;
plikP >> paczki[i].mieszkanie;

//cout << "paczka dla " << paczki[i]. dom << " " << paczki[i].mieszkanie << endl;
}
int ostatniaLuka;
int ileBrakow = 0;
for(int i = 0; i < 1000; i++)
{
if(czyJestDom(paczki[i].dom) == false && ostatniaLuka != paczki[i].dom)
{
ileBrakow++;
ostatniaLuka = paczki[i].dom;
}
}

cout << "A: " << ileBrakow;
}
