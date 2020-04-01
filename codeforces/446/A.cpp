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
    ll n,i=0;
    cin>>n;
    ll a[n];
    while(i<n)
        cin>>a[i++];
    ll l[n],r[n];
    l[0]=1;
    i=1;
    ll ans=1;
    while(i<n)
    {
        if(a[i]>a[i-1])
            l[i]=1+l[i-1];
        else
            l[i]=1;
        ans=max(ans,1+l[i-1]);
        i++;
    }
    r[n-1]=1;
    i=n-2;
    while(i>-1)
    {
        if(a[i]<a[i+1])
            r[i]=1+r[i+1];
        else
            r[i]=1;
        ans=max(ans,1+r[i+1]);
        i--;
    }
    i=1;
    while(i<n-1)
    {
        ans=max(ans,1+max(l[i-1],r[i+1]));
        if(a[i-1]+2<=a[i+1])
            ans=max(ans,1+l[i-1]+r[i+1]);
        i++;
    }
    cout<<ans;
}
