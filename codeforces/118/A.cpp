#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    cin>>s;
    ll i=0;
    char c;
    while(i<s.size())
    {
        c=tolower(s[i]);
        if(c!='a'&&c!='e'&&c!='o'&&c!='i'&&c!='u'&&c!='y')
            cout<<"."<<c;
        i++;
    }
}
