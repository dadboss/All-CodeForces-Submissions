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
    ll t,x,y,a,b,q,ans;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>a>>b;
        if(x>y)
            swap(x,y);
        ans=a*(x+y);
        q=b*(x)+a*(y-x);
        deb(min(ans,q));
    }
}
