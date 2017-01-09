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
#define fill2d(l,nm) fill_n(*l, sizeof l/sizeof **l,nm);
#define MOD 1000000007
using namespace std;
#define int long long

int n, d, f, limit, ary[100010], ans;


main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>d;
for(int i = 0; i < n; i++)
  cin>>ary[i];
int r = 0;
for(int i = 0; i < n; i++)
{
  while(r < n-1 && ary[r+1]-ary[i] <= d)
    ++r;
  int k = r-i;
  ans += k*(k-1)/2;
}
cout<<ans<<endl;

}