#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll a,b;
	cin>>a>>b;
	if(a>b||(b-a)%2)
		cout<<-1;
	else if(a==0&&b==0)
	cout<<0;
	else if(a==b)
	{
		cout<<"1\n"<<a;
	}
	else 
	{
		if((a&((b-a)/2))==0){
		//cout<<"fds";
		cout<<"2\n"<<(a+b)/2<<" "<<(b-a)/2;
		}
		else
		cout<<"3\n"<<a<<" "<<(b-a)/2<<" "<<(b-a)/2;
	}
}