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
//    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll n,x,d;
    cin>>n;
    cout<<"0 ";
    ll i=1;
    while(i<n)
    {
     cout<<(1ll<<(i-1))<<" ";
     i++;
    }
    cout<<"\n";
    i=1;
    ll j;
    while(i<n)
    {
        if(i%2)
        {
            j=0;
            while(j<n)
            {
                cout<<"0 ";
                j++;
            }
        }
        else
        {
            x=(1ll<<(i-1));
            j=0;
            while(j<n)
            {
                cout<<x<<" ";
                x*=2;
                j++;
            }
        }
        cout<<"\n";
        i++;
    }
    ll q,y;
    cin>>q;
    while(q--)
    {
        cin>>d;
        x=y=1;
        deB(x,y);
        i=0;
        while(x!=n||y!=n)
        {
            if(x%2)
            {
                if((d>>i)&1)
                    y++;
                else
                    x++;
            }
            else
            {
                if((d>>i)&1)
                    x++;
                else
                    y++;
            }
            i++;
            deB(x,y)
        }
    }
}
