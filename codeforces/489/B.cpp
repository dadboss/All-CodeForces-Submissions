#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,c=0,a[1000],b[1000],i=0,j=0;
    cin>>m;
    while(i<m)
    {
        cin>>a[i++];
    }
    cin>>n;
    while(j<n)
    {
        cin>>b[j++];
    }
    sort(a,a+m);
    sort(b,b+n);
    i=0;
    j=0;
    while(i<m&&j<n)
    {
        if(abs(a[i]-b[j])<2)
        {
            c++;
            i++;
            j++;
        }
        else if(a[i]<b[j])
            i++;
        else
            j++;
    }
    cout<<c;
}
