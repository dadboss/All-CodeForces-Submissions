#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,ans=0;
    cin>>n>>m;
    ll a[n+1],i=1;
    while(i<=n)
    {
        cin>>a[i];
    //    cout<<" "<<a[i]<<" ";
        i++;
    }
    while(m--)
    {
        cin>>n>>i;
        //cout<<a[n]<<" "<<a[i]<<"\n";
        ans+=min(a[n],a[i]);
    }
    cout<<ans;
}
