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
int main()
{
   // fop;
    int t;
    t = GI;
    REP(i,t)
    {
        int siz,op;
        cin>>siz>>op;
        int ar[siz];
        for(int a=0; a<siz; a++)
        {
            ar[a] = GI;
        }
        for(int b=0; b<op; b++)
        {
            char x;int m,n;
            cin>>x;
            if(x=='S')
            {   cin>>m;
                for(int q=0; q<siz;q++)
                {
                    ar[q]+=m;
                }
            }
            else if(x=='M')
            {   cin>>m;
                for(int q=0; q<siz;q++)
                {
                    ar[q]*=m;
                }
            }
            else if(x=='D')
            {
                cin>>m;
                for(int q=0; q<siz; q++)
                {
                    ar[q]/=m;
                }
            }
            else if(x=='P')
            {  int temp;
                cin>>m>>n;
                temp = ar[m];
                ar[m]=ar[n];
                ar[n]=temp;
            }
            else
            {
                int pr[siz];int d=0;
                for(int h=siz-1;h>=0;h--)
                {
                    pr[d]=ar[h]; d++;
                }
                for(int h=0;h<siz;h++)
                {
                    ar[h]=pr[h];
                }
            }
        }
        printf("Case %d:\n",i+1);
        for(int y=0;y<siz; y++)
        {
            cout<<ar[y];
            if(y!=siz-1)cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
