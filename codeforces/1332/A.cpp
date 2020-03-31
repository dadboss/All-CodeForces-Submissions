#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
#define Deb(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n";
#define OK cout<<"OK";
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t,a,b,c,d,x1,x2,x,y1,y2,y;
    cin>>t;
    while(t--)
    {
        ll f=0;
        cin>>a>>b>>c>>d;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        if(((a||b)&&(x1==x&&x2==x))||((c||d)&&(y==y1&&y==y2)))
            cout<<"NO\n";
        else
        if(x-a+b>x2||x-a+b<x1)
            cout<<"NO\n";
        else if(y-c+d>y2||y-c+d<y1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}
