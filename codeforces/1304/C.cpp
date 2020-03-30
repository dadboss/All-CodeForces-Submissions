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
    ll tt,t,T,l,h,n,m,ans,time,pl,ph;
    cin>>tt;
    while(tt--)
    {
        cin>>n>>m;
        t=0;
        pl=ph=m;
        ans=1;
        while(n--)
        {
          //  deB(pl,ph);
            cin>>T>>l>>h;
            time=T-t;
            if(ph+time<l||pl-time>h)
                ans=0;
            if(ph+time>h)
                ph=h;
            else
                ph+=time;
            if(pl-time<l)
                pl=l;
            else
                pl-=time;
            t=T;
        }
        if(ans)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
