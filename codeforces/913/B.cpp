#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll d,n;
    ll i=2;
    cin>>n;
   // vector<ll> a[10000];
    ll sizes[10000]={};
    vector<ll> a;
    ll p[10000];
    while(i<=n)
    {
        cin>>d;
        p[i]=d;
       // a[d].push_back(i);
       a.push_back(d);
        sizes[d]++;
        i++;
    }
    //cout<<sizes[1]<<"\n";
    i=2;
    while(i<=n)
    {
        if(sizes[i])
        {
            sizes[p[i]]--;
        }
        i++;
    }
    i=0;
    while(i<a.size())
    {
        //cout<<i<<" "<<sizes[i]<<"\n";
        if(sizes[a[i]]<3)
        {
            cout<<"No";
            return 0;
        }
        i++;
    }
    cout<<"Yes";
}
