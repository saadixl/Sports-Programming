using namespace std;

///___________________________________________________///
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
///___________________________________________________///
///___________________________________________________///
    #define mp make_pair
    #define pb push_back
    #define sz size()
    #define si(x) scanf("%d",&x)
    #define int64 long long int
    #define src(x,y) scanf("%d%d",&x,&y)
    #define st(x,y,z) scanf("%d%d%d",&x,&y,&z)
    #define fop freopen("acm.txt", "r", stdin)
    #define GI ({int _t; scanf("%d", &_t); _t;})
    #define FOR(i, a, b) for (int i=a; i<b; i++)
    #define REP(i, a) FOR(i, 0, a)
    template<class T> string toString(T n){ostringstream ost;ost<<n;ost.flush();return ost.str();}
    int toInt(string s){int r=0;istringstream sin(s);sin>>r;return r;}
    #define DBG(x) cout << #x << "::" << x << endl;
    #define DBGV(_v) { REP(_i, _v.size()) { cout << _v[_i] << "\t";} cout << endl;}


///___________________________________________________///

double square(double a)
{
    return a*a;
}

double distance(int x1, int y1, int x2, int y2)
{
    return sqrt(square(x1-x2)+square(y1-y2));
}

int main()
{   //fop;
    int T;
    T = GI;
    REP(i,T)
    {
        int n, a;
        src(n,a);
        int px, py;
        double pangle=0,rangle=0,len=0;
        for(int ii=0; ii<n; ii++)
        {
            int x, y;
            src(x,y);
            double angle=atan2(y,x-a);
            if(angle>rangle)
            {
                double A=angle-pangle;
                double B=rangle-pangle;
                double C=atan2(y-py,x-px)-pangle-B;
                double b=distance(a,0,px,py);
                len+=(distance(px,py,x,y)-(sin(B)*b/sin(C)));
                rangle=angle;
            }
            px=x;
            py=y;
            pangle=angle;
        }
        printf("Case %d: %.9f\n",i+1,len);
    }
    return 0;
}
