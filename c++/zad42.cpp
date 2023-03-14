#include <iostream>
using namespace std;

int tab[42] = {2, 3, 5, 6, 7, 9, 12, 13, 14, 15, 17, 18, 19, 23, 24, 26, 27, 28, 34, 35, 38, 42, 43, 45, 48, 52, 53, 54, 56, 59, 61, 65, 66, 67, 70, 73, 74, 75, 77, 78, 92, 99};

int binarne(const int szukane) {
  /*int a = 0; int b = 41;
  int c;
  while(a < b){
    c = (a + b)/2;
   if(tab[c] == szukane) return c;
   else if(tab[c] > szukane) {
      b = c-1;
    } else a = c+1;
    cout << a << " " << b << endl;
  }
  if(tab[a] == szukane) return a;
  else*/
  //{
  int najblizsza = 200;
  int a = 0; int b = 41;
  int c;
  while(a < b){
    c = (a + b)/2;
   if(abs(tab[c] - szukane) < abs(najblizsza - szukane)) najblizsza = tab[c];
   if(tab[c] > szukane) {
      b = c-1;
    } else a = c+1;
    cout << a << " " << b << endl;
  }
  return najblizsza;

  //}
}

int main()
{

int liczba;
cin >> liczba;

int gdzie = binarne(liczba);

if(gdzie == liczba) cout << "liczba " << gdzie << " znajduje się w pliku"<< endl;
else cout << "najbliższa jest liczba: " << gdzie << endl;
}
