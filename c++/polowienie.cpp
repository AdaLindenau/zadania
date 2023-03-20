#include<bits/stdc++.h>
using namespace std;

int a, b, c, d;

double polowienie (double x1, double x2)
{
if(x2 < x1)
{
double t = x2;
x2 = x1;
x1 = t;
}
double dx = x2 -x1;
double f1, f2, fs;
double xs = (x2 +x1)/2;
while(dx > 0.001)
{
f1 = a*x1*x1*x1 + b*x1*x1 + c*x1 + d;
f2 = a*x2*x2*x2 +b*x2*x2 + c*x2 +d;
fs = a*xs*xs*xs + b*xs*xs +c*xs +d;
if(f1*fs < 0)
{
x2 = xs;
}
else
{
x1 =xs;
}
xs = (x2 +x1)/2;
}
return (x2 +x1)/2;
}


int main()
{
srand(time(NULL));

do{ a = rand() % 21 - 10; } while(a != 0);
b = rand() % 21 - 10;
c = rand() % 21 - 10;
d = rand() % 21 - 10;
int A, B, C;
A = 3*a;
B = 2*b;
C = c;
double delta = B*B - 4*A*C;
if (delta <= 0)
{
cout << "Nie ma rozwiązania" << endl;
return 0;
}
double x1 = (-B + sqrt(delta)) / (2*A);
double x2 = (-B - sqrt(delta)) / (2*A);
double f1 = a*x1*x1*x1 + b*x1*x1 + c*x1 + d;
double f2 = a*x2*x2*x2 +b*x2*x2 + c*x2 +d;
if(f1 * f2 > 0)
{
cout << "Pomiędzy maksimum i minimum nie ma miejsca zerowego" << endl;
return 0;
}
double zerowe = polowienie(x1, x2);
cout << "znaleziono miejsce zerowe: " << zerowe << endl;
return 0;
}
