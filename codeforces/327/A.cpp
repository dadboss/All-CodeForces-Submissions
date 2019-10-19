#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[105];
    cin>>n;
    int i=0,ct=0;
    while(i<n)
    {
        cin>>a[i];
        if(a[i++]==1)
            ct++;
    }
    if(ct==n)
    {
    	cout<<n-1;
    	return 0;
    }
    i=0;
   int cs=0,ms=0;
    while(i<n)
    {
        if(a[i]==1)
            cs--;
        else
            cs++;
        if(cs<0)
            cs=0;
        else
            ms=max(ms,cs);
        i++;
    }
    cout<<ct+ms;
}
