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
    ll n,b;
    cin>>n>>b;
    ll a[n],i=0;
    while(i<n)
        cin>>a[i++];
    ll c=0;
    i=0;
    vector<ll> v;
    while(i<n-1)
    {
        if(a[i]%2)
            c++;
        else
            c--;
        if(c==0)
            v.pb(abs(a[i]-a[i+1]));
        i++;
    }
    sort(v.begin(),v.end());
    ll ans=0;
    i=0;
    while(i<v.size())
    {
        ans+=v[i];
        if(ans>b)
        {
            cout<<i;
            return 0;
        }
        i++;
    }
    cout<<i;
}
