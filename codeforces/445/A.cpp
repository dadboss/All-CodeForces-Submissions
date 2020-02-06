#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m;
    cin>>n>>m;
    string s;
    ll i,f,c=0;
    while(n--)
    {
        f=c;
        cin>>s;
        i=0;
        while(i<m)
        {
            if(s[i]=='.')
            {
                if(f)
                    s[i]='W';
                else
                    s[i]='B';
            }
            f=1-f;
            i++;
        }
        cout<<s<<"\n";
        c=1-c;
    }
}
