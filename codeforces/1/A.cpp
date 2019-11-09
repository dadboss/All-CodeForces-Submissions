#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,a,sum=0;
    cin>>n>>m>>a;
    sum+=((n+a-1)/a)*((m+a-1)/a);
    cout<<sum;
}
