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
    #define pi 3.1416
    #define INF INT_MAX
    #define P(k) printf("Case %d: ",k)
    struct food
    {
        int r;
        int c;
        int asci;
    };

int rr[] = { +0, +0, -1, +1 };
int cc[] = { -1, +1, +0, +0 };
int main()
{
  // fop;
    int t,k=1;
    si(t);
    while(t--)
    {
        int row,col;
        si(row);
        col = row;
        char maze [12][12];
        int graph[12][12];
        char n;
        vector<food>v;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                cin>>n;
                maze[i][j]=n;
                if(isalpha(n))
                {
                    food tmp;
                    tmp.asci = (int) n;
                    tmp.r = i;
                    tmp.c = j;
                    v.pb(tmp);
                }

                graph[i][j]=INF;
            }
        }
        REP(i,v.sz)
        {
            REP(j,v.sz-1)
            {

              food tmp;
              if(v[j].asci>v[j+1].asci)
              {
                  tmp=v[j];
                  v[j]=v[j+1];
                  v[j+1]=tmp;
              }
            }
        }
        bool found=false;

                int rent = 0;
            REP(x,v.sz-1)
            {
                for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {


                graph[i][j]=INF;
            }
        }
                food now = v[x];
                food next = v[x+1];

            int srr = now.r;
            int src = now.c;
            queue<pair<int, int> > q;
            q.push(make_pair(srr,src));
            graph[srr][src]=0;
            char ch=maze[srr][src];
            int x=(int)ch;
            while(!q.empty())
            {
                pair<int,int>temp;
                temp = q.front();
                q.pop();
                for(int i=0; i<4; i++)
                {
                    int tr = temp.first+rr[i];
                    int tc = temp.second+cc[i];
                    if(tr<0 || tr>=row || tc<0 ||tc>=col)
                    {
                        continue;
                    }
                    n = maze[tr][tc];
                    if(n=='#'|| (int)n>next.asci )
                    {
                        continue;
                    }

                    int newcost = graph[temp.first][temp.second]+1;
                    if(newcost<graph[tr][tc])
                    {
                        graph[tr][tc]=newcost;
                        q.push(make_pair(tr,tc));
                    }
                }


        }
        if(graph[next.r][next.c]==INT_MAX)
        {
            found=true;
            rent=INT_MAX;
            break;
        }
        else
        {
            rent+=graph[next.r][next.c];
        }


            }

            P(k++);
            if(found)
            {
                printf("Impossible\n");
            }
            else
            {
                printf("%d\n",rent);
            }




    }




    return 0;
}
