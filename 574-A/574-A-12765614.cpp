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
#include <list>
#include <ctime>
#include <memory.h>

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
typedef long long LL;

using namespace std;

int n, k, ary[101];

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n>>k;
  int xs = k;
  for(int i = 0; i < n-1; i++)
  {
    cin>>ary[i];
  }
  sort(ary, ary+n-1);
  while(k <= ary[n-2])
  {
    --ary[n-2];
    ++k;
    sort(ary, ary+n-1);
  }
  cout<<k-xs<<endl;
  return 0;
}