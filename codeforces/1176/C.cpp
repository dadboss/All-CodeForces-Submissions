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
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll n;
    cin>>n;
    ll i=0,a,d,b,c,D,e,f;
    a=b=c=D=e=f=0;
    while(i<n)
    {
    	cin>>d;
    	if(d==4)
    		a++;
    	else if(d==8)
    		{if(b<a)
    			b++;
    		}
    	else if(d==15)
    		{
    			//deB(c,b);
    			if(c<b)
    			c++;
    		}
    	else if(d==16)
    		{if(D<c)
    			D++;}
    	else if(d==23)
    		{if(e<D)
    			e++;}
    	else if(d==42)
    		{if(f<e)
    			f++;}
    	i++;
    }
    cout<<n-6*f;
}