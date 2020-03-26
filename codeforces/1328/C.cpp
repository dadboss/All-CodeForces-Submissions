#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp makepair
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
int main()
{
    /*
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    */
    ll t,n,i,j;
    cin>>t;
    while(t--)
    {
    	string s,a="",b="";
    	cin>>n>>s;
    	i=0;
    	j=0;
    	while(i<n)
    	{
    		if(j)
    		{
    			a+='0';
    			b+=s[i];
    		}
    		else
    		{
    			if(s[i]=='2')
    			{
    				a+='1';
    				b+='1';
    			}
    			else if(s[i]=='0')
    			{
    				a+='0';
    				b+='0';
    			}
    			else
    			{
    				a+='1';
    				b+='0';
    				j++;
    			}
    		}
    		i++;
    	}
    	cout<<a<<"\n"<<b<<"\n";
    }
}
