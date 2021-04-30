#include<iostream>
#include<queue>
#include<climits>
#include<algorithm>
#include<stdio.h>
using namespace std;
int rr[] = { +0, +0, -1, +1 };
int cc[] = { -1, +1, +0, +0 };
int main()
{
   // freopen("acm.txt","r",stdin);
    int t,kase=0;
    cin>>t;
    while(t--)
    {
        int row,col;
        cin>>col>>row;
        char maze [25][25];
        int graph[25][25];
        int sr,sc;
        char n;
        int dr,dc;

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                cin>>n;
                maze[i][j]=n;
                if(n=='@')
                {
                    sr=i;
                    sc=j;
                }


                graph[i][j]=INT_MAX;

            }
        }

int count=0;

            int srr = sr;
            int src = sc;
            queue<pair<int, int> > q;
            q.push(make_pair(srr,src));
            graph[srr][src]=0;
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
                    if(n=='#')
                    {
                        continue;
                    }

                   // maze[tr][tc]='#';
                    int newcost = graph[temp.first][temp.second]+1;
                    if(newcost<graph[tr][tc])
                    {
                        graph[tr][tc]=newcost;
                        q.push(make_pair(tr,tc));
                    }
                }
           //   count++;



        }
        kase++;

        for(int x=0; x<row;x++)
        {
            for(int y=0; y<col; y++)
            {
               if(graph[x][y]!=INT_MAX)count++;
            }
           // cout<<endl;
        }
printf("Case %d: %d\n",kase,count);


    }




    return 0;
}
