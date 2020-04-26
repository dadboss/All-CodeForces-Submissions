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
    ll t,a,b,q,l,num,ans,r,lc;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>q;
        if(a>b)
            swap(a,b);
        lc=lcm(a,b);
        while(q--)
        {
            cin>>l>>r;
            //l=max(l,b);
            ans=0;
            while(l%b!=0)
            {
                if(l%lc&&l%b%a!=l%a%b)
                ans++;
                l++;
                
            }
            while(r>=l&&r%b!=0)
            {
                if(r%lc&&r%b%a!=r%a%b)
                ans++;
                r--;
            }
         //   cout<<ans<<" "<<l<<" "<<r<<"\n";
            
            ans+=r-l+1;
            ans-=b*(r/lc - (l-1)/lc-1);
            num=(r/lc)*lc;
            ans-=min(b,r-num+1);
            
            cout<<ans<<" ";
        }
        cout<<"\n";
    }
}
