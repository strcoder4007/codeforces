#include <fstream>
#include <iostream>
#include <string>
#include <complex>
#include <math.h>
#include <set>
#include <vector>
#include <map>
#include <queue>
#include <stdio.h>
#include <stack>
#include <algorithm>
#include <iomanip>
#include <list>
#include <ctime>
#include <memory.h>
#include <bitset>

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
#define MOD 1000000007
#define LL long long
using namespace std;

int x, y, a, b;
vector<pair<int , int> >myvec;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>x>>y>>a>>b;
for(int i = a; i <= x; i++)
  for(int j = b; j <= y; j++)
    if(i > j)
      myvec.pb(mp(i, j));
sort(myvec.begin(), myvec.end());
cout<<myvec.size()<<endl;
for(int i = 0; i < myvec.size(); i++)
  cout<<myvec[i].F<<" "<<myvec[i].S<<endl;


return 0;}