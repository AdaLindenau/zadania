#include <iostream>
using namespace std;

struct grid
{
int** tab;
grid(int k, int l)
{
for(int i = 0; i < l; i++)
{
for (int j = 0; j < k; j++)
{
cin >> tab[j][i];
}
}
}
}

int main()
{
int proby;
int l;
int k;
cin >> proby;
cin >> l;
cin >> k;
}
