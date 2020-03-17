#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll a,b,ct=0;
	cin>>a>>b;
	while(1)
	{
		if(a==0||b==0)
			break;
		if(a==1&&b==1)
			break;
		if(a<b)
			{
				a++;
				b-=2;
			}
		else
		{
			b++;
			a-=2;
		}
		ct++;
	}
	cout<<ct;	
}