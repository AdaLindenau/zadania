#include <iostream>
using namespace std;

int fib(long n)
{
if(n < 2) return n;
return fib(n-1) + fib(n- 2);
}

long fibIt (long n)
{
long a = 0;
long b = 1;
long f = 0;
if(n < 2) return n;
for(int i = 1; i <= n ; i++)
{
f= a+ b;
b = a;
a = f;
}
return f;
}

int main()
{
cout << fib(40) << endl;
return 0;
}
