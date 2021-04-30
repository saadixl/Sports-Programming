#include<iostream>
#include<queue>
#include<climits>
#include<algorithm>
#include<cstdio>
using namespace std;
int rr[] = { +0, +0, -1, +1 };
int cc[] = { -1, +1, +0, +0 };
int main()
{
   //freopen("acm.txt","r",stdin);
    int t;
    cin>>t;
     int cases =0;
    while(t--)
    {
        cases++;
        int row,col;
        cin>>row>>col;
        char maze [25][25];
        int graph[25][25];
        int sr[3],sc[3];
        char n;
        int dr,dc,p=0; int result [3];
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                cin>>n;
                maze[i][j]=n;
                if(n=='a'||n=='b'||n=='c')
                {
                    sr[p]=i;
                    sc[p]=j;
                    p++;
                }
                if(n=='h')
                {
                    dr =i;
                    dc = j;
                }

                graph[i][j]=INT_MAX;

            }
        }
        for(int k = 0; k<3; k++){


            int srr = sr[k];
            int src = sc[k];
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
                    if(n=='#'||n=='m')
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
        result [k] = graph[dr][dc];
        for(int v=0; v<row; v++)
        {
            for(int b=0; b<col; b++)
            {
                graph[v][b]=INT_MAX;
            }
        }

        }
       sort(result,result+3);

       cout<<"Case "<<cases<<": ";
       cout<<result[2]<<endl;

    }

    return 0;
}
