#include<bits/stdc++.h>
using namespace std;

double pierwiastek(double a)
{
const double delta = 0.001;
double x1 = 2;
double x2 = (x1+a/x1)/2;
while(abs(x2 - x1) > delta)
{
x1 = x2;
x2 = (x1+a/x1)/2;
}
return x2;
}
double potega(double a, int n)
{
double r =1;
while (n > 1)
{
if(n % 2 == 1) r*= a;
a*= a;
n/= 2;
}
return r*a;
}
double pierwiastek(double a, double n)
{
const double delta = 0.001;
double x1 = 2;
double x2 = ((n-1)*x1+a/potega(x1, n-1))/n;
while(abs(x2 - x1) > delta)
{
x1 = x2;
x2 = ((n-1)*x1+a/potega(x1, n-1))/n;
}
return x2;
}

int main()
{
cout.precision(20);
cout << sqrt(2) << " " << pierwiastek(2) << endl;
cout << pow(2, 4) << " " << pierwiastek(2, 1.0/4.0) << endl;
return 0;
}
