#include<iostream>
using namespace std;
int main()
{
    int t,kase=0;
    cin>>t;
    while(t--)
    {
        kase++;
        int a,b;
        cin>>a>>b;
        int d =4*(b-a);
        if(d<0)
        {
            d*=-1;
        }
        int minit = d + 4*a + 19;
        cout<<"Case "<<kase<<": "<<minit<<endl;
    }
    return 0;
}
