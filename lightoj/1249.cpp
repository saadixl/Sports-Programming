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
    #define src(x,y) scanf("%d%d",&x,&y)
    #define st(x,y,z) scanf("%d%d%d",&x,&y,&z)
    #define fop freopen("acm.txt", "r", stdin)
    #define GI ({int _t; scanf("%d", &_t); _t;})
    #define FOR(i, a, b) for (int i=a; i<b; i++)
    #define REP(i, a) FOR(i, 0, a)


struct choc
{
    string str;
    int x;
    int y;
    int z;

};

    int main()
    {
        //fop;
        int t;
        cin>>t;
        REP(i,t)
        {
            int n;
            cin>>n;
            choc ar[n+1];
            string thief,victim;
            int max=0, min =INT_MAX;
            REP(j,n)
            {
                cin>>ar[j].str>>ar[j].x>>ar[j].y>>ar[j].z;
                int vol = ar[j].x*ar[j].y*ar[j].z;
                if(max<vol)
                {
                    max = vol;
                    thief = ar[j].str;
                }
                if(min>vol)
                {
                    min = vol;
                    victim = ar[j].str;
                }
            }
            printf("Case %d: ",i+1);

            if(max==min)
            {
                cout<<"no thief\n";
            }
            else
            {
                cout<<thief<<" took chocolate from "<<victim<<endl;
            }

        }


        return 0;
    }
