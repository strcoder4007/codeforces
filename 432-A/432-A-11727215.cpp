#include <bits/stdc++.h>
#define case(t) int t; cin>>t; while (t-- > 0)
#define mp make_pair
#define pb push_back
#define vi vector<int>
#define vs vector<string>
#define pii pair<int,int>
#define vpii vector<pair<int,int> >
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
 int main (void)
 {
   //freopen("/tmp/input.txt", "r", stdin);
   ios_base::sync_with_stdio(false);
   int n, k, sum = 0;
   cin>>n>>k;
   int ary[n];
   for(int i = 0; i < n; i++)
   {
     int xs;
     cin>>xs;
     ary[i] = xs+k;
     if(ary[i] > 5)
       ary[i] = -1;
     else
       ++sum;
   }
   int xs = sum/3;
   cout<<xs<<endl;
 }