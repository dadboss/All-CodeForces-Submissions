#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
ll n,i;cin>>n;
ll c=1;
while(c*5<n){
	n-=c*5;
	c*=2;
}	
//cout<<--n/c;
ll tmp=(n-1)/c;
switch(tmp){
	case 0:cout<<"Sheldon";break;
	case 1:cout<<"Leonard";break;
	case 2:cout<<"Penny";break;
	case 3:cout<<"Rajesh";break;
	case 4:cout<<"Howard";break;
}
return 0;
}

