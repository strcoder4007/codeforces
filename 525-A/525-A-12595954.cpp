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
typedef long long LL;

using namespace std;

int n, ans, sz, num[500];
string s;

bool inif;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n>>s;
  sz = s.size();
  for (int i = 0; i < sz; i++)
  {
      if (i % 2 == 0)
            num[s[i]]++;
        else {
            int need = tolower(s[i]);
            if (num[need] == 0) {
                ans++;
            }
            else {
                num[need]--;
            }
        }
    }

    cout << ans << endl;

  return 0;
}