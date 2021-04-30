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
#define sq(x) x*x
using namespace std;
int main()
{
    int t,kase=1;
    si(t);
    while(t--)
    {
        int a[3];
        st(a[0],a[1],a[2]);
        sort(a,a+3);
         printf("Case %d: ",kase++);
        if(sq(a[2]) == (sq(a[1])+sq(a[0])))
        {
            printf("yes\n");
        }
        else
        {
             printf("no\n");
        }
    }


    return 0;

}
