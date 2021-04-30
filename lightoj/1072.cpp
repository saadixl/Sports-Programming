using namespace std;

#include <set>
#include <map>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
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

    #define mp make_pair
    #define pb push_back
    #define sz size()
    #define si(x) scanf("%d",&x)
    #define int64 long long int
    #define src(x,y) scanf("%lf%lf",&x,&y)
    #define st(x,y,z) scanf("%d%d%d",&x,&y,&z)
    #define fop freopen("input.txt", "r", stdin)
    #define GI ({int _t; scanf("%d", &_t); _t;})
    #define FOR(i, a, b) for (int i=a; i<b; i++)
    #define REP(i, a) FOR(i, 0, a)
    #define pi 2*acos(0.0)
    #define INF INT_MAX
    #define P(k) printf("Case %d: ",k)

int main()
{
    int t;
    si(t);
    int casee=0;
    while(t--)
    {
        casee++;
        double R,n;
        src(R,n);
        double thita=(2*pi)/n;
        thita/=2;
        double r=(sin(thita)*R)/(1+sin(thita));
        printf("Case %d: ",casee);
        printf("%lf\n",r);




    }
}
