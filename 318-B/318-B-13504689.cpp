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

string s;
long long cnt, sum, sz;
vector<int>myvec;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>s;
sz = s.size();
for(int i = 0; i < sz; i++)
{
  if(s[i] == 'h' && s[i+1] == 'e' && s[i+2] == 'a' && s[i+3] == 'v' && s[i+4] == 'y')
    myvec.pb(1);
  else if(s[i] == 'm' && s[i+1] == 'e' && s[i+2] == 't' && s[i+3] == 'a' && s[i+4] == 'l')
    myvec.pb(0), ++cnt;
}
for(int i = 0; i < myvec.size(); i++)
  if(myvec[i] == 1)
    sum += cnt;
  else
    --cnt;
cout<<sum<<endl;

return 0;}