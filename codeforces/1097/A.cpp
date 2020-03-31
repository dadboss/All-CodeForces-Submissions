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
    string s,q;
    cin>>s;
    ll i=0;
    while(i<5)
    {
        cin>>q;
        if(q[0]==s[0]||q[1]==s[1])
            {
                cout<<"YES";
                return 0;
            }
        i++;
    }
    cout<<"NO";
}
