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

long long n, x, cnt;

int32_t main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>x;
for(int i = 0; i < n; i++)
{
    char ch; int xs;
    cin>>ch>>xs;
    if(ch == '+')
        x += xs;
    else
    {
        if(x >= xs)
            x -= xs;
        else
            ++cnt;
    }
}
cout<<x<<" "<<cnt<<endl;

return 0;}