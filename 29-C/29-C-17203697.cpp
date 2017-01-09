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
#include <climits>

#define F first
#define S second
#define endl "\n"
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
using namespace std;

int n, start;
set<int>myset;
map<int, vector<int> >mymap;
map<int, int> visited;

void dfs(int x)
{
    visited[x] = 1;
    cout<<x<<" ";
    for(int i = 0; i < mymap[x].size(); i++)
        if(!visited[mymap[x][i]])
            dfs(mymap[x][i]);
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
{
    int u, v;
    cin>>u>>v;
    mymap[u].pb(v);
    mymap[v].pb(u);
    myset.insert(u), myset.insert(v);
}

for(set<int>::iterator ii = myset.begin(); ii != myset.end(); ii++)
    if(mymap[*ii].size() == 1)
        start = *ii;
dfs(start);
cout<<endl;

return 0;}