#include<iostream>
using namespace std;

int potegowanieSzybkie(int a, int x)
{
int w = 1;

while (x > 0)
{
if(x % 2 == 1) w *= a;
a *= a;
x /= 2;

}
return w*a;
}

int main()
{
int a;
int x;

cout << "podaj podstawę potęgi" << endl;
cin >> a;

cout << "podaj wykładnik potęgi" << endl;
cin >> x;

cout << potegowanieSzybkie(a, x);


}
