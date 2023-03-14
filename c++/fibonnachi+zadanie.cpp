#include <iostream>
using namespace std;
/*
int fibonacci(int n)
{
    int prev_1 = 0;
    int prev_2 = 1;
    int act = 0;
    if(n > 0) cout << prev_2 << "\t";
    for(int i = 1; i < n; i++)
    {
        act = prev_1 + prev_2;
        cout << act << "\t";
        prev_1 = prev_2;
        prev_2 = act;
    }
    cout << endl;
    return act;
}

int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}

*/

//Zadanie


int fibonacci(int n)
{
    int prev_1 = 1;
    int prev_2 = 2;
    int prev_3 = 3;
    int act = 0;
    if(n > 0) cout << prev_1 << "\t";
    if(n > 1) cout << prev_2 << "\t";
    if(n > 2) cout << prev_3 << "\t";
    for(int i = 3; i < n; i++)
    {
        act = prev_1 + prev_2 + prev_3;
        cout << act << "\t";
        prev_1 = prev_2;
        prev_2 = prev_3;
        prev_3 = act;
    }
    cout << endl;
    return act;
}

int dodaj (int n,int k)
{

    int prev_1 = 1;
    int prev_2 = 2;
    int prev_3 = 3;
    int act = 0;
    int suma = 0;
    int i = 3;

    while( i < k )
    {
        act = prev_1 + prev_2 + prev_3;

        prev_1 = prev_2;
        prev_2 = prev_3;
        prev_3 = act;
        i++;

    }

    while (i <= n)
    {
        act = prev_1 + prev_2 + prev_3;

        prev_1 = prev_2;
        prev_2 = prev_3;
        prev_3 = act;
        suma += act;
    }
    cout << suma << endl;
    return suma;

}

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    cout << fibonacci(n) << endl;
    cout << dodaj(n,k) << endl;
    return 0;
}
