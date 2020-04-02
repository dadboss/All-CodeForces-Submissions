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
    ll n,m,d;
    cin>>n>>m>>d;
    ll a[n*m];
    cin>>a[0];
    ll i=1;
    while(i<n*m)
    {
        cin>>a[i];
        if(a[i]%d!=a[0]%d)
        {
            cout<<-1;
            return 0;
        }
        i++;
    }
    sort(a,a+(n*m));
    i=0;
    ll ans=0;
 //   deb(a[(n*m)/2]);
    while(i<(n*m))
    {
        //deb(a[(n*m)/2]-a[i]);
        ans+=abs(a[(n*m)/2]-a[i])/d;
        i++;
    }
    cout<<ans;
}
