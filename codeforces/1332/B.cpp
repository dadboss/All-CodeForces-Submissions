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
    ll n,i,j,p[11]={2,3,5,7,11,13,17,19,23,29,31};
    ll a[1001];
    ll t;
    cin>>t;
    ll c[1001];
    while(t--)
    {
        cin>>n;
        vector<ll> v;
        i=0;
        while(i<n)
        {
            cin>>a[i];
            j=0;
            while(!v.empty()&&j<v.size())
            {
                if(a[i]%v[j]==0)
                {
                  c[i]=j+1;
                  break;
                }
                j++;
            }
            if(v.empty()||j==v.size())
            {
                j=0;
                while(j<11)
                {
                    if(a[i]%p[j]==0)
                    {
                        v.pb(p[j]);
                        c[i]=v.size();
                        break;
                    }
                    j++;
                }
            }
            i++;
        }
        deb(v.size());
        i=0;
        while(i<n)
        {
            cout<<c[i]<<" ";
            i++;
        }
        cout<<"\n";
    }
}
