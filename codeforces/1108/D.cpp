#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    ll n;
    string s;
    cin>>n>>s;
    s+='a';
    ll i=0,ans=0;
    while(i<n)
    {
        if(s[i]==s[i+1])
        {
            ans++;
            if(s[i+1]==s[i+2])
            {
                if(s[i]=='R')
                    s[i+1]='B';
                else if(s[i]=='G')
                    s[i+1]='R';
                else
                    s[i+1]='G';
            }
            else
            {
                if(s[i]=='R')
                {
                    if(s[i+2]=='B')
                        s[i+1]='G';
                    else
                        s[i+1]='B';
                }
                else if(s[i]=='B')
                {
                    if(s[i+2]=='R')
                        s[i+1]='G';
                    else
                        s[i+1]='R';
                }
                else
                {
                    if(s[i+2]=='R')
                        s[i+1]='B';
                    else
                        s[i+1]='R';

                }
            }
        }
        i++;
    }
    s.pop_back();
    cout<<ans<<"\n"<<s;
}