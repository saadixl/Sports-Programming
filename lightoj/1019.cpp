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
    #define si(x) scanf("%lld",&x)
    #define int64 long long int
    #define src(x,y) scanf("%d%d",&x,&y)
    #define st(x,y,z) scanf("%d%d%d",&x,&y,&z)
    #define fop freopen("acm.txt", "r", stdin)
    #define GI ({int _t; scanf("%d", &_t); _t;})
    #define FOR(i, a, b) for (int64 i=a; i<b; i++)
    #define REP(i, a) FOR(i, 0, a)
    #define pi 3.1416
#define MM 505
vector <int> e[MM], cost[MM];
int inf = 1000000000;
int n,m;
typedef pair<int,int> pii;
int main() {

    int t,i;
    int p=1;
    scanf("%d",&t);
    int cs=1;
    while(t--) {
        scanf("%d %d",&n,&m);
        for( i = 0; i < n; i++ ) {
            e[i].clear();
            cost[i].clear();
            }
        while( m-- ) {
            int u, v, w;
            scanf("%d %d %d", &u, &v, &w);

            e[u].push_back(v);
            cost[u].push_back(w);
            e[v].push_back(u);
            cost[v].push_back(w);
            }
        int x;
        x = 1;

        priority_queue< pii > q;
        int dist[MM];
        for(int i=0; i<MM; i++) dist[i] = inf;

        dist[ x ] = 0;
        q.push( pii(0,x) );
        while( !q.empty() ) {
            pii node = q.top();
            q.pop();
            int u = node.second;
            if( dist[u] < -node.first ) continue;
            for(int i=0; i<e[u].size(); i++) {
                int v = e[u][i];
                int cst = cost[u][i];
                if( dist[ v ] > dist[u] + cst ) {
                    dist[ v ] = dist[u] + cst;
                    q.push( pii( -dist[v], v ) );
                    }
                }
            }

            printf("Case %d: ",cs++);
            if(dist[n]==inf)
            {
                printf("Impossible\n");
            }
            else
            {
                printf("%d\n",dist[n]);
            }



        }
    }
