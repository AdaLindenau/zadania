#include<bits/stdc++.h>
using namespace std;


double obwod(vector<pair<int,int>>& w)
{
double o = 0;
double dx, dy;
for(int i = 0; i < w.size() -1; i++)
{
dx = w[i].first - w[i +1].first;
dy = w[i].second - w[i +1].second;
o += sqrt(dx*dx + dy*dy);
}
dx = w[w.size() - 1].first - w[0].first;
dy = w[w.size() - 1].second - w[0].second;
o += sqrt(dx*dx + dy*dy);
return o;
}

double pole(vector<pair<int,int>>& w)
{
double s = 0;
for(int i = 0; i < w.size() -1; i++)
{
s += (w[i].second + w[i +1].second)/2.0 *(w[i+1].first - w[i].first);
}
s += (w[0].second + w[w.size() - 1].second)/2.0 *(w[0].first - w[w.size() - 1].first);
return s;
}

int main()
{
int n = 0;
int x, y;
ifstream plik ("wielokaty.txt");
for(int i = 0; i < 100; i++)
{
plik >> n;
vector<pair<int,int>> w;
for(int j = 0; j < n; j++)
{
plik >> x >> y;
w.push_back(make_pair(x,y));
}
}
vector<pair<int,int>> w;
w.push_back(make_pair(2, 5));
w.push_back(make_pair(6,4));
w.push_back(make_pair(3,2));

for(pair<int, int> p: w)
{
cout << p.first << ", " << p.second << " ";
}
cout << endl;

cout << obwod(w) << endl;
cout << pole(w) << endl;
return 0;
}
