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
#define maxn 505
#define fop freopen("acm.txt","r", stdin)
#define cas(x) printf("Case %d:\n",x)
#define nl printf("\n");
using namespace std;
int r[] = {0, 0, -1, 1};
int c[] = {1, -1, 0, 0};

struct rc
{
    int row, col;
};

string maze[maxn];

int m,n,tt;
vector<rc>graf;
vector<int>cris;
bool visited[maxn][maxn];

void rec()
{
    graf.clear();
    cris.clear();
    memset(visited, false, sizeof(visited));
}

int bfs(int ro, int co)
{
            int cnt=0;
            rc temp;
            temp.row= ro;
            temp.col= co;
            queue<rc>q;
            q.push(temp);

            while(!q.empty())
            {

                temp = q.front();
                q.pop();
                if(visited[temp.row][temp.col])continue;

                visited[temp.row][temp.col]=true;
                if(maze[temp.row][temp.col]=='C')
                {
                    cnt++;
                }
                if(maze[temp.row][temp.col]=='#')
                {
                    continue;
                }
                for(int x=0; x<4; x++)
                {
                    int sr = temp.row+r[x];
                    int sc = temp.col+c[x];
                    if(sr<0 || sr>=m || sc<0 || sc>=n)
                    {
                        continue;
                    }
                    if(visited[sr][sc])
                    {
                        continue;
                    }
                    rc l;
                    l.row = sr;
                    l.col = sc;
                    q.push(l);
                }

            }//end of BFS

    return cnt;
}



int main()
{
  //  fop;
    int t,kase=0;
    si(t);
    while(t--)
    {
        kase++;
        rec();
        st(m,n,tt);
        for(int i=0; i<m; i++)
        {
            cin>>maze[i];
        }
        for(int i=0; i<tt; i++)
        {
            rc obj;
            src(obj.row,obj.col);
            obj.row--;
            obj.col--;
            graf.pb(obj);
            cris.pb(-1);
        }
        for(int i=0; i<tt; i++)
        {
            if(cris[i]> -1)
            {
                continue;
            }
            int cst = bfs(graf[i].row,graf[i].col);

            for(int x=i; x<tt; x++)
            {
                if(visited[graf[x].row][graf[x].col])
                {
                    if(cris[x] > -1)
                    {
                        continue;
                    }
                    cris[x]=cst;
                }

            }


        }

        cas(kase);
        for(int i=0; i<tt; i++)
        {
            if( cris[i] == -1)
            {
                pi(0); nl;
            }
            else
            {
                pi(cris[i]); nl;
            }
        }

    }

    return 0;
}
