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
ll a[100];
ll f[200];
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll x,t,n,m,i;
    cin>>t;
    while(t--)
    {
        memset(f,0,sizeof(f));
        cin>>n>>x;
        i=0;
        while(i<n)
        {
            cin>>a[i];
            f[a[i]]++;
            i++;
        }
        i=1;
        ll ctr=0;
        while(i<101)
        {
            if(f[i]==0)
            {
                if(x)
                {
                    x--;
                }
                else
                {
                    cout<<i-1<<"\n";
                    ctr=1;
                    break;
                }
            }
            i++;
        }
        if(ctr==0)
            cout<<i+x-1<<"\n";
    }
}
