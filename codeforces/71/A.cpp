#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        if(s.size()<=10)
            cout<<s<<"\n";
        else
        {
            cout<<s[0]<<s.size()-2<<s[s.size()-1]<<"\n";
        }
    }
}
