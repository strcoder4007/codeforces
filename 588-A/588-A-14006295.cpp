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

int n, init, firsty, save;
long long sum;
vector<pair<int, int> > myvec;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
{
  int x, y; cin>>x>>y;
  myvec.pb(mp(x, y));
}
int i;
for(i = 0; i < myvec.size()-1; i++)
{
  init = myvec[i].S;
  firsty = myvec[i].F;
  save = myvec[i].S;
  while(myvec[i+1].S > save && i < myvec.size()-1)
  {
    firsty += myvec[i+1].F;
    i++;
  }
  sum += init*firsty;
}
//cout<<i<<endl;
if(i == myvec.size()-1)
  sum += myvec[i].F*myvec[i].S;
cout<<sum<<endl;

return 0;}