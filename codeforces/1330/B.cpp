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
ll a[200010];
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t,n,i,j,k,q,w;
    set<ll> s;
    cin>>t;
    while(t--)
    {
        s.clear();
        vector<ll> v,z;
        cin>>n;
        i=1;
        while(i<=n)
            cin>>a[i++];
        i=1;
        while(i<=n)
        {
            s.insert(a[i]);
            if(s.size()==i)
            {
                auto it=s.end();
                it--;
                if(*it==i)
                    v.pb(i);
            }
            i++;
        }
        i=n;
        s.clear();
        while(i)
        {
            s.insert(a[i]);
            if(s.size()==n-i+1)
            {
                auto it=s.end();
                it--;
                if(*it==n-i+1)
                    z.pb(i-1);
            }
            i--;
        }/*
        for(auto x:v)
            cout<<x<<" ";
        cout<<"\n";
        for(auto x:z)
            cout<<x<<" ";
        cout<<"\n";*/
        if(v.empty()||z.empty())
        {
            cout<<"0\n";
        }
        else
        {
            sort(z.begin(),z.end());
            i=j=k=0;
            q=w=-1;
            while(i<v.size()&&j<z.size())
            {
                if(v[i]==z[j])
                {
                    k++;
                    if(k==1)
                        q=v[i];
                    else
                    {
                        w=v[i];
                        break;
                    }
                    i++;
                    j++;
                }
                else if(v[i]>z[j])
                    j++;
                else
                    i++;
            }
            deb(k);
            if(k)
                deB(q,n-q);
            if(k==2)
                deB(w,n-w);
        }
    }
}
