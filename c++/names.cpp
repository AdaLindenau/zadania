#include<iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main()
{
vector <pair<string, int>> imiona;
string p_imie;
char p;
for (int i = 0; i < 7; i++)
{
cin.clear();
cin.ignore(7, ' ');
cin.ignore(20, ' ');
for (int i = 0; i < 20; i++)
{
cin >> p;

if (p > 95)
{
p -= 32;
}
p_imie += p;

}
imiona.push_back(make_pair(p_imie, 1));
}
for(int i = 0; i < imiona.size(); i++)
cout << imiona[i].first << imiona[i].second;
}
