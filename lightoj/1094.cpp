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
#define maxn 30005

using namespace std;

int main()
{
    int t,kase=0;
    si(t);
    while(t--)
    {
        kase++;
        int n;
        si(n);
        vector<pair<int, int> > e[maxn];
        for(int i=0; i<n-1; i++)
        {
            int u,v,c;
            st(u,v,c);
            e[u].pb(mp(v,c));
            e[v].pb(mp(u,c));
        }
        int dist [maxn];


        int anyNode=0;
        for(int kk=1; kk<=2; kk++)
        {
            for(int i=0; i<n; i++)
            {
                dist[i]=INT_MAX;
            }

            queue<int> q;

            q.push(anyNode);

            dist[anyNode]=0;
            while(!q.empty())
            {
                int father = q.front();
                q.pop();
                vector<pair<int, int> >nCost = e[father];
                for(int i=0; i<nCost.size(); i++)
                {
                    int child = nCost[i].first;
                    int cost = nCost[i].second+dist[father];
                    if(cost<dist[child])
                    {
                        dist[child]=cost;
                        q.push(child);
                    }
                }

            }

            if(kk==1)
            {
                int maxnode=dist[0];
                for(int i=0; i<n; i++)
                {
                    if(dist[i]>maxnode)
                    {
                        maxnode=dist[i];
                        anyNode=i;
                    }
                }
            }

        }

        cout<<"Case "<<kase<<": ";
        sort(dist,dist+n);
        cout<<dist[n-1]<<endl;


    }
    return 0;
}
