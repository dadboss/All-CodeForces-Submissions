#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp makepair
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
#define Deb(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n" 
#define YES cout<<"YES\n";
#define Yes cout<<"Yes\n";
#define NO cout<<"NO\n";
#define No cout<<"No\n";
#define all(v) (v).begin(),(v).end()
string s;
void pri()
{
	ll i=0;
	while(i<=s.size()/2)
	{
		cout<<4;
		i++;
	}
	i=0;
	while(i<=s.size()/2)
	{
		cout<<7;
		i++;
	}
	exit(0);
}
ll a[100009];
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  cin>>s;
  if(s.size()%2)
  {
  	pri();
  }
  ll i=0;
  ll last=-1;
  while(i<s.size())
  	{
  		if(s[i]=='4'||s[i]=='7')
  		{
  			if(s[i]=='4')
  				{
  					last=i;
  					if(i!=0)
  					a[i]=a[i-1];
  				}
  			else
  				{
  					if(i!=0)
  						a[i]=1+a[i-1];
  					else
  						a[i]=1;
  				//	deb(a[i]);
  				}
  		}
  		else if(s[i]<'4')
  		{
  			s[i]='4';
  			a[i]=a[i-1];
  			last=i;
  			i++;
  			break;
  		}
  		else if(s[i]<'7')
  		{
  			s[i]='7';
  			if(i!=0)
  				a[i]=1+a[i-1];
  			else
  				a[i]=1;
  			i++;
  			break;
  		}
  		else
  		{
  			if(last==-1)
  				pri();
  			s[last]='7';
  			a[last]=1+a[last-1];
  			i=last+1;
  			break;
  		}
  		i++;
  	}
  	ll j=i;
  	while(i<s.size())
  	{
  		s[i]='4';
  		i++;
  	}
  	i=0;
  	ll ct=0;
  	while(i<j)
  	{
  		if(s[i]=='7')
  			ct++;
  		i++;
  	}
  	ll diff=s.size()/2-ct;
  	if(diff==0)
  	{
  		cout<<s;
  		return 0;
  	}
  	else if(diff>0)
  	{
  		i=s.size()-1;
  		ll x=0;
  		while(x<diff)
  		{
  			if(s[i]=='4')
  			{
  				s[i]='7';
  				x++;
  			}
  			i--;
  		}
  		cout<<s;
  		return 0;
  	}
  	else
  	{
  		i--;
  		while(i>-1)
  		{
  			//Deb(i,a[i],s[i]);
  			if(a[i]<=s.size()/2&&s[i]=='4')
  			{
  				s[i]='7';
  				ll rem=s.size()/2-a[i]-1;
  				i++;
  				while(i+rem<s.size())
  				{
  					s[i]='4';
  					i++;
  				}
  				while(i<s.size())
  				{
  					s[i]='7';
  					i++;
  				}
  				cout<<s;
  				return 0;
  			}
  			i--;
  		}
 		pri();
  	}
}