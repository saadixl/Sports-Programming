#include <set>
#include <map>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <climits>
#include <cctype>
#include <cstdio>
#include <string>
#include <vector>
#include <cassert>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <iostream>
#include <algorithm>
#define pb push_back
#define mp make_pair
#define si(x) scanf("%d",&x)
#define st(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define src(x,y) scanf("%d%d",&x,&y)
#define pi(x) printf("%d",x)
#define sc(c) scanf("%s",&c)
#define pc(c) printf("%s",c)
#define int64 long long int
#define maxn 110
#define fop freopen("acm.txt", "r", stdin)
#define rep(i,n) for(int i=0; i<n; i++)
using namespace std;

int one(int n)
{
    int count=1;
    while(n>0)
    {
        if(n%2==1)count++;
        n/=2;
    }
    return count;
}

int main()
{
    //fop;
    int t;
    si(t);
    rep(i,t)
    {
        int n,m;
        cin>>n;
        m = one(n)+1;
        printf("Case %d: ",i+1);
        if(m%2==0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }

    }

}
