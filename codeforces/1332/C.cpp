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
    ll t,i,j,k,n,ans,mx;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>n>>k>>s;
        vector<vector<ll>> a((k+1)/2,vector<ll> (26,0));
        i=0;
        while(i<n)
        {
            j=0;
            while(j<(k+1)/2)
            {
                a[j][s[i+j]-'a']++;
                a[j][s[i+k-1-j]-'a']++;
                j++;
            }
            i+=k;
        }
        i=0;
        ans=0;
        while(i<(k+1)/2)
        {
            mx=1;
            j=0;
            while(j<26)
            {
                mx=max(mx,a[i][j]);
                j++;
            }
            if(k%2&&i==(k+1)/2-1)
                ans+=((n/k)*2-mx)/2;
            else
            ans+=(n/k)*2-mx;
            //deb((n/k)*2-mx);
            i++;
        }
        cout<<ans<<"\n";
    }
}
