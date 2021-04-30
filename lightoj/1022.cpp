#include<iostream>
#include<cmath>
#include<stdio.h>
#define pi 2*acos(0.0)
using namespace std;
int main()
{
    int t,kase=1;
    cin>>t;
    while(t--)
    {
       double rad;
       cin>>rad;
       double area;
       area=(rad*2)*(rad*2);
       double circle;
       circle=pi*rad*rad;
       double shaded;
       shaded=area-circle;
       printf("Case %d: %.2lf\n",kase++,shaded);

    }
}
