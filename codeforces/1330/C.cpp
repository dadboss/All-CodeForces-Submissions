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
    ll n,m;
    cin>>n>>m;
    ll a[m+1];
    ll i=0,sum=0;
    while(i<m)
    {
        cin>>a[i];
        sum+=a[i];
        if(i+a[i]>n)
        {
            cout<<-1;
            return 0;
        }
        i++;
    }
    if(sum<n)
    {
        cout<<-1;
        return 0;
    }
    ll b[m];
    b[m-1]=n-a[m-1];
    i=m-2;
    while(i>-1)
    {
        b[i]=b[i+1]-a[i];
        if(b[i]<i)
            b[i]=i;
        i--;
    }
    i=0;
    while(i<m)
        cout<<b[i]+1<<" ",i++;
}
