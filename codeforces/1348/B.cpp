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
ll a[10009];
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t,i,n,k,j,ctr;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ll f[150]={};
        vector<ll> v;
        i=j=ctr=0;
        while(i<n)
        {
            cin>>a[i];
            if(j==k)
            {
                if(f[a[i]]==0)
                    ctr=1;
            }
            else
            {
                f[a[i]]++;
                if(f[a[i]]==1)
                {
                    v.pb(a[i]);
                    j++;
                }
            }
            i++;
        }
        if(ctr==1)
            deb(-1)
        else
        {
            while(j<k)
            {
                j++;
                v.pb(1);
            }
            deb(n*k);
            i=0;
            while(i<n*k)
            {
                cout<<v[i%v.size()]<<" ";
                i++;
            }
            cout<<"\n";
        }
    }
}
