#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll up(ll n)
{
    ll i,c=1;
    //vector<ll> v;
	//v.push_back(1);
    if(n%2==0)
    {
        i=2;
        while(i<=sqrt(n))
        {
            if(n%i==0)
             {
             	return 0;
             }
            i++;
        }
    }
    else
    {
        i=3;
        while(i<=sqrt(n))
        {
            if(n%i==0)
               {
               	return 0;
               }
            i+=2;
        }
    }
    return 1;
}
int main() {
	ll n,s=0,d,t;
	unordered_map<ll,int> a;
	cin>>n;
	t=n;
	while(n--)
	{
		cin>>d;
		if(a.count(d)){
		if(a[d]==1)
		cout<<"NO\n";
		else if(a[d]==2)
		cout<<"YES\n";
		}
		else if(d==1)
		{
			a[1]=1;
			cout<<"NO\n";
			//n--;
			//goto tre;
		}
		else{
		double x=d;
		x=sqrt(x);
		if((ll)x*(ll)x!=d)
			cout<<"NO\n",a[d]=1;
		else
		{
			if(up(sqrt(d)))
			cout<<"YES\n",a[d]=2;
			else
			cout<<"NO\n",a[d]=1;
		}
		}
	}
	//cout<<c;
}