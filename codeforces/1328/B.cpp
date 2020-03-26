#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp makepair
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
ll f(ll n)
{
    ll s=0,a,e=2000000000,mid,p;
    while(s<=e)
    {
        mid=(s+e)/2;
       //cout<<mid<<" ";
        a=mid*(mid+1)/2;
        if(a<n)
            s=mid+1;
        else
            e=mid-1;

    }
    return s;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    /*
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    */
    ll t,n,a,temp,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>a;
        i=1;
        temp=f(a);
        while(i<n-temp)
        {
            cout<<'a';
            i++;
        }
        cout<<'b';
        i=temp;
        temp=temp*(temp+1)/2 -a;
        i-=temp;
        while(temp--)
            cout<<'a';
        cout<<'b';
        i--;
        while(i--)
            cout<<'a';
        cout<<'\n';
    }
}
