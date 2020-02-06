#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll p=1000000007;
int main()
{
    ll j,n,k,d;
    cin>>n>>k>>d;
    ll a[n+1]={};
    a[0]=1;
    ll i=1;
    while(i<=n)
    {
        j=1;
        while(i-j>-1&&j<=k)
        {
            a[i]+=a[i-j];
            a[i]%=p;
            j++;
        }
        i++;
    }
    ll q[n+1]={};
    q[0]=1;
    i=1;
    while(i<=n)
    {
        j=1;
        while(i-j>-1&&j<d)
        {
            q[i]+=q[i-j];
            q[i]%=p;
            j++;
        }
        i++;
    }
    cout<<(a[n]-q[n]+p)%p;
}
