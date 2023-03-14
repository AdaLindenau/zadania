#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> punkty;

void A()
{
    int w = 0;
    int b = 0;
    int r2;
    for(pair<int,int> p: punkty)
    {
        r2 = (p.first - 200)*(p.first - 200) + (p.second - 200)*(p.second - 200);
        if(r2 == 40000) b++;
        else if(r2 < 40000) w++;
    }
    cout << "A" << endl << w << " " << b<< endl;
}

void obliczPi(int nk, int n)
{
    double pi = 4.0*(double)nk/(double)n;
    pi = round(pi*10000)/10000.0;
    cout << pi <<endl;
}

void B()
{
    int n = 0;
    int r2;
    int linia = 1;
    cout << "B" << endl;
    for(pair<int,int> p: punkty)
    {
        r2 = (p.first - 200)*(p.first - 200) + (p.second - 200)*(p.second - 200);
        if(r2 <= 40000) n++;
        if (linia == 1000) obliczPi(n, 1000);
        else if (linia == 5000) obliczPi(n, 5000);
    }
    obliczPi(n, 10000);
}

void C()
{
    ofstream wyjscie("wyniki_305.txt");
    int r2;
    int n = 0;
    int linia = 1;
    cout << "C, w pliku" << endl;
    for(pair<int,int> p: punkty)
    {
        r2 = (p.first - 200)*(p.first - 200) + (p.second - 200)*(p.second - 200);
        if(r2 <= 40000) n++;
        double pi = 4.0*(double)n/(double)linia;
        double e = abs(M_PI - pi);
        wyjscie << linia << " " << e << ";" << endl;
        linia++;
    }
    wyjscie.close();
}

int main()
{
    ifstream plik("punkty.txt");
    int x,y;
    for(int i = 0; i < 10000; i++)
    {
        plik >> x >> y;
        punkty.push_back(make_pair(x,y));
    }

    A();
    B();
    C();
//for(pair<int,int> p: punkty) cout << p.first << " " << p.second;
    return 0;
}
