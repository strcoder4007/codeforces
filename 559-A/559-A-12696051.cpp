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
typedef long long LL;

using namespace std;

LL ary[6], s;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  for(int i = 0; i < 6; i++)
    cin>>ary[i];
  s = ary[0]+ary[1]+ary[2];
  cout<<s*s-ary[0]*ary[0]-ary[2]*ary[2]-ary[4]*ary[4]<<endl;

  return 0;
}