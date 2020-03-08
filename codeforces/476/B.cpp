#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll ncr(ll n,ll k)  
{  
    ll res = 1;  
  
    // Since C(n, k) = C(n, n-k)  
    if ( k > n - k )  
        k = n - k;  
  
    // Calculate value of  
    // [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1]  
    for (int i = 0; i < k; ++i)  
    {  
        res *= (n - i);  
        res /= (i + 1);  
    }  
  
    return res;  
}  
int main() {
	string s,a;
	cin>>s>>a;
//	cout<<s<<" "<<a<<"\n";
	ll t=0,i=0,p=0,m=0;
	while(i<s.size())
	{
		if(s[i]=='-')
		m++;
		else
		p++;
		i++;
	}
	i=0;
//	cout<<m<<" "<<p<<"\n";
	while(i<a.size())
	{
		if(a[i]=='?')
		t++;
		else if(a[i]=='-')
			m--;
		else
			p--;
		i++;
	}
//	cout<<m<<" "<<p;
	if(m<0||p<0)
	cout<<0;
	else
	{
		cout<<fixed<<setprecision(10)<<1.0*ncr(t,p)/(1<<t);
	}
}