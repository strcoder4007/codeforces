#include <bits/stdc++.h>
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repp(i, a, b) for (int i = (a);i < (b); ++i)
#define ri(x) scanf("%d", &(x))
#define rii(x, y) scanf("%d%d", &(x), &(y))
#define riii(x, y, z) scanf("%d%d%d", &(x), &(y), &(z))
#define dri(x) int (x); scanf("%d", &x)
#define drii(x, y) int x, y; scanf("%d%d", &x, &y)
#define driii(x, y, z) int x, y, z; scanf("%d%d%d", &x, &y, &z)
#define rs(x) scanf("%s", (x))
#define case(t) int t; cin>>t; while (t-- > 0)
#define mp make_pair
#define pb push_back
#define ms0(x) memset((x), 0, sizeof((x)))
#define ms1(x) memset((x), -1, sizeof((x)))
#define len(x) strlen(x)
#define vi vector<int>
#define vs vector<string>
#define pii pair<int,int>
#define vpii vector<pair<int,int> >
#define pll pair<long long,long long>
#define F first
#define S second
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
const double sqt2=sqrt(2);

 int main (void)
 {
   drii(n, m);
   char mat[n][m];

   rep(i, n)
    rep(j, m)
     {
         if (i%2 == 0)
            mat[i][j] = '#';
         else
            mat[i][j] = '.';
     }

    int buff = 1;
   for(int i = 0; i < n-1; i += 2)
   {
       if(buff == 1)
        {
         mat[i+1][m-1] = '#';
         buff = 0;
        }
       else
       {
        mat[i+1][0] = '#';
        buff = 1;
       }
   }
  rep(i, n)
  {
    rep(j, m)
      cout<<mat[i][j];
    cout<<endl;
  }
}